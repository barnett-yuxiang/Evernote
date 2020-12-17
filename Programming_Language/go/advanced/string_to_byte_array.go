package main

import (
	"fmt"
	"reflect"
)

func stringToByteArray() {
	stack := Stack{Id: 1024}
	pointer := &stack
	sp1 := fmt.Sprintf("%p", pointer)
	fmt.Println(sp1)
	array := []byte(sp1)
	fmt.Println(reflect.TypeOf(array), array)
}
