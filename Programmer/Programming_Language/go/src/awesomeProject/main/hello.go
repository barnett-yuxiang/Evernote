package main

import "fmt"

/* 函数返回两个数的最大值 */
func max(num1, num2 int) int {
	/* 声明局部变量 */
	var result int

	if num1 > num2 {
		result = num1
	} else {
		result = num2
	}
	return result
}

func swap(x, y string) (string, string) {
	return y, x
}

func main() {
	fmt.Println("Hello, World")

	var a int = 10
	var b string = "w3cschool.cn"
	var c bool
	d := 101
	println(a, b, c, d)

	const (
		a1 = iota
		b1
		c1 = 100
		d1
		e1 = iota
		f1
	)
	fmt.Println(a1, b1, c1, d1, e1, f1)

	fmt.Println(max(1, 2))
	fmt.Println(swap("hello", "world"))
}
