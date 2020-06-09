package main

import "fmt"

type Phone interface {
	call()
}

type Android struct {
}

type NokiaPhone struct {
}

func (android Android) call() {
	fmt.Println("I am Android, i can call you")
}

func (nokiaPhone NokiaPhone) call() {
	fmt.Println("I am Nokia Phone, i can call you")
}

func main() {
	var phone Phone
	phone = new(NokiaPhone)
	phone.call()
	phone = new(Android)
	phone.call()
}
