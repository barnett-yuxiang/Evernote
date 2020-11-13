package miscrofactory

import (
	"flag"
	"fmt"
	"os"
	"path/filepath"
	"time"
)

func Main() {
	fmt.Println("miscrofactory Main")

	var output, mybin string
	var config Config
	pkgMap := pkgPathMappingVar{&config}

	flags := flag.NewFlagSet("", flag.ExitOnError)
	flags.BoolVar(&config.Race, "race", false, "enable data race detection.")
	flags.BoolVar(&config.Verbose, "v", false, "Verbose")
	flags.StringVar(&output, "o", "", "Output file")
	flags.StringVar(&mybin, "b", "", "Microfactory binary location")
	flags.StringVar(&config.TrimPath, "trimpath", "", "remove prefix from recorded source file paths")
	flags.Var(pkgMap, "pkg-path", "Mapping of package prefixes to file paths")
	err := flags.Parse(os.Args[1:])

	if err == flag.ErrHelp || flags.NArg() != 1 || output == "" {
		fmt.Fprintln(os.Stderr, "Usage:", os.Args[0], "-o out/binary <main-package>")
		flags.PrintDefaults()
		os.Exit(1)
	}

	tracePath := filepath.Join(filepath.Dir(output), "."+filepath.Base(output)+".trace")
	if traceFile, err := os.OpenFile(tracePath, os.O_RDWR|os.O_CREATE|os.O_APPEND, 0666); err == nil {
		defer traceFile.Close()
		config.TraceFunc = func(name string) func() {
			fmt.Fprintf(traceFile, "%d B %s\n", time.Now().UnixNano()/1000, name)
			return func() {
				fmt.Fprintf(traceFile, "%d E %s\n", time.Now().UnixNano()/1000, name)
			}
		}
	}
}

type Config struct {
	Race    bool
	Verbose bool

	TrimPath string

	TraceFunc func(name string) func()

	pkgs  []string
	paths map[string]string
}

type pkgPathMappingVar struct {
	*Config
}
