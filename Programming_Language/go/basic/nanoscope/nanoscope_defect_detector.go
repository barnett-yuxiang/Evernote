package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"strings"
	"os"
)

func DetectUnpairedMethods(inputPath string) {
	s, err := loadInputFile(inputPath)
	if err != nil {
		fmt.Println(err)
	}
	lines := strings.Split(strings.Trim(s, "\n"),"\n")
	var stack []string
	for i, line := range lines {
		if strings.HasPrefix(line, "#") {
			continue
		}
		if strings.HasSuffix(line, "POP") {
			if len(stack) != 0 {
				stack = stack[:len(stack)-1]
			}
		} else {
			stack = append(stack, fmt.Sprintf("%d %s", i, line))
		}
	}
	if len(stack) == 0 {
		fmt.Println("Check finished: methods all paired.")
	} else {
		fmt.Printf("Check finished: %d lines unpaired:\n%s\n", len(stack), strings.Join(stack, "\n"))
	}
}

func loadInputFile(inputFilePath string) (string, error) {
	body, err := ioutil.ReadFile(inputFilePath)
	if err != nil {
		log.Fatalln("Failed to read input file: ", err)
		return "", err
	}
	return string(body), nil
}

func main() {
    arg := os.Args
    DetectUnpairedMethods(arg[1])
}
