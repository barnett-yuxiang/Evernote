package main

import (
	"fmt"
	"hash/fnv"
	"reflect"
)

type Stack struct {
	Id int64
}

func Test03() {
	fmt.Println(hash("HelloWorld"))
	fmt.Println(hash("HelloWorld."))

	stack := Stack{Id: 1024}
	pointer := &stack
	sp := fmt.Sprintf("%p", pointer)
	fmt.Println(reflect.TypeOf(sp))
}

func hash(s string) uint32 {
	h := fnv.New32a()
	h.Write([]byte(s))
	return h.Sum32()
}
