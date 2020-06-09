package main

import "fmt"

func main() {
	// array
	var balance = []float32{100.0, 3.14, 51.2}
	println(balance[1])
	balance[1] = 101.3
	println(balance[1])

	// pointer
	var a int = 10
	fmt.Printf("var a address is %x\n", &a)

	var ip *int
	var fp *float32
	fmt.Printf("fp is %x\n, ip is %x\n", fp, ip)
	ip = &a
	println(ip)
}
