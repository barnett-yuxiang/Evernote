package main

import (
	"fmt"
)

type Game struct {

}

func (game Game) over(cnt int) {
	fmt.Printf("Game Over - %d\n", cnt)
}

func main() {
	fmt.Println("---")
	var game Game
	game.over(31)
}