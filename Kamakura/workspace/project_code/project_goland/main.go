package main

import (
	"fmt"

	"github.com/google/uuid"
)

// GenerateUUID generates a new UUID
func GenerateUUID() string {
	uuid, _ := uuid.NewRandom()
	return uuid.String()
}

// main is the entry point of the Go program.
//
// It does not take any parameters.
// It does not have a return type.
func main() {
	fmt.Println(GenerateUUID())
}
