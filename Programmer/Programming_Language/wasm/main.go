// main.go
package main

import (
	"syscall/js"
	"fmt"
	"time"
)

func bar(this js.Value, args []js.Value) interface{} {
	t1 := time.Now()
	fmt.Println("hellow wasm 1")
	fmt.Println("hellow wasm 2")
	fmt.Println("hellow wasm 3")
	tc := time.Since(t1)	//计算耗时
	fmt.Printf("time cost = %v\n", tc)
	return -1
}

func registerCallbacks() {
	js.Global().Set("bar", js.FuncOf(bar))
}

func main() {
	c := make(chan struct{}, 0)
	println("Hello, WebAssembly!")
	registerCallbacks()

	t1 := time.Now()
	fmt.Println("hellow wasm 1")
	fmt.Println("hellow wasm 2")
	fmt.Println("hellow wasm 3")
	tc := time.Since(t1)	//计算耗时
	fmt.Printf("time cost = %v\n", tc)

	<-c
}