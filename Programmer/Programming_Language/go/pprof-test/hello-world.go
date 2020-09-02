package main

import (
	"fmt"
	"io/ioutil"
	_ "net/http/pprof"
	"os"
	"runtime/pprof"
	"time"
)

func main() {

	//go func() {
	//	_ = http.ListenAndServe("0.0.0.0:8899", nil)
	//}()

	cpuProfile, _ := os.Create("cpu_profile")
	pprof.StartCPUProfile(cpuProfile)

	_, err := ioutil.ReadFile("nano_data_new.txt")
	if err != nil {
		fmt.Print(err)
	}

	defer pprof.StopCPUProfile()

	time.Sleep(time.Second * 600)
}
