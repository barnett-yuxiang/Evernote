package main

import (
	"testing"

	"github.com/google/uuid"
)

func TestGenerateUUID(t *testing.T) {
	t.Log("start")
	uid := GenerateUUID()
	t.Logf("The UUID is %s", uid)
	if !isValidUUID(uid) {
		t.Fatalf("GenerateUUID() = %v, want valid UUID", uid)
	}
	t.Log("end")
}

// isValidUUID checks if provided string is valid UUID.
func isValidUUID(u string) bool {
	_, err := uuid.Parse(u)
	return err == nil
}
