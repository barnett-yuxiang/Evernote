package main

func main() {
	Test01()

	added("a + b", func(a, b int) int {
		return a + b
	})

	Test03()
}
