package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"strings"
	"os"
)

const (
DispatchMethodName = "android.os.Handler.dispatchMessage(android.os.Message)"
)

func DetectUnpairedMethods(inputPath string) {
	s, err := loadInputFile(inputPath)
	if err != nil {
		fmt.Println(err)
	}
	var stack, dispatchResultList, dispatchStack []string
	firstDispatchFound := false
	dispatchOccur, sections := 0, 0
	for i, line := range strings.Split(strings.Trim(s, "\n"),"\n") {
		if strings.HasPrefix(line, "#") {
			continue
		}
		if strings.HasSuffix(line, "POP") {
			if len(stack) != 0 {
				stack = stack[:len(stack)-1]
			}
			if len(dispatchStack) != 0 {
				dispatchStack = dispatchStack[:len(dispatchStack)-1]
			}
		} else {
			if strings.Contains(line, DispatchMethodName) {
				dispatchOccur++
				if firstDispatchFound && len(dispatchStack) != 0{
					// copy dispatch stack to result list
					dispatchResultList = append(dispatchResultList, dispatchStack...)
					dispatchResultList = append(dispatchResultList, "\n")
					sections++
				} else {
					// first occurrence
					firstDispatchFound = true
				}
				// always clear stack when dispatch occurs
				//fmt.Println("dispatch stack: ", dispatchStack)
				//fmt.Println("result list: ", dispatchResultList)
				dispatchStack = dispatchStack[:0]
			} else {
				dispatchStack = append(dispatchStack, fmt.Sprintf("%d %s", i + 1, line))
			}
			stack = append(stack, fmt.Sprintf("%d %s", i + 1, line))
		}
	}
	if len(stack) == 0 {
		fmt.Println("***************************** Check finished: methods all paired. " +
			"*****************************")
	} else {
		fmt.Printf("***************************** Check finished: %d lines unpaired: " +
			"*****************************\n%s\n", len(stack), strings.Join(stack, "\n"))
	}
	if len(dispatchResultList) == 0 {
		fmt.Printf("\n***************************** Dispatch: %d occurrence. methods all paired. " +
			"*****************************", dispatchOccur)
	} else {
		fmt.Printf("\n***************************** Dispatch: %d occurrence. %d lines unpaired in %d section(s): " +
			"*****************************\n%s\n", dispatchOccur, len(dispatchResultList) - sections, sections,
			strings.Join(dispatchResultList, "\n"))
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

