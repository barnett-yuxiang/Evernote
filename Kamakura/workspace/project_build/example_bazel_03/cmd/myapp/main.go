package main

import (
	"fmt"
	"github.com/barnett-yuxiang/Evernote/Kamakura/workspace/project_build/example_bazel_03/pkg/calculator"
)

func main() {
	result := calculator.Add(1, 2)
	fmt.Printf("1 + 2 = %d\n", result)
}
