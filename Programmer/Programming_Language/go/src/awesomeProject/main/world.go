package main

import "fmt"

type Book struct {
	title  string
	author string
	bookId int
}

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

	var book1 Book
	var book2 Book

	book1.author = "Yu."
	book1.title = "Go Language"
	book1.bookId = 3124

	book2.author = "Qui"
	book2.title = "Python"
	book2.bookId = 4213

	fmt.Println(book1, book2)
	printBook(&book1)
}

func printBook(book *Book) {
	fmt.Printf("Book title is %s\n", book.title)
	fmt.Printf("Book author is %s\n", book.author)
	fmt.Printf("Book ID is %d\n", book.bookId)
}
