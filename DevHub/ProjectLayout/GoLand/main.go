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

func main() {
	fmt.Println(GenerateUUID())
}
