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
	sp1 := fmt.Sprintf("%p", pointer)
	sp2 := fmt.Sprintf("%d", pointer)
	fmt.Println(sp1, reflect.TypeOf(sp1))
	fmt.Println(sp2, reflect.TypeOf(sp2))
}

func hash(s string) uint32 {
	h := fnv.New32a()
	h.Write([]byte(s))
	return h.Sum32()
}
