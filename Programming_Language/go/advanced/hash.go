package main

import (
	"fmt"
	"hash/fnv"
)

func Test03() {
	fmt.Println(hash("HelloWorld"))
	fmt.Println(hash("HelloWorld."))
}

func hash(s string) uint32 {
	h := fnv.New32a()
	h.Write([]byte(s))
	return h.Sum32()
}
