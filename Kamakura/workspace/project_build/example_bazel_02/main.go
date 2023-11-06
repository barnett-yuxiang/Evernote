package main

import (
	"fmt"
	"github.com/barnett-yuxiang/Evernote/Kamakura/workspace/project_build/example_bazel_02/util"
	"github.com/google/uuid"
)

func main() {
	fmt.Println("Hello from the main application!")
	fmt.Println(util.GetGreeting())
	fmt.Println("Here is a UUID:", uuid.New().String())
}
