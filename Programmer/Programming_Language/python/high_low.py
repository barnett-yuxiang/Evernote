#!/usr/bin/python3

number = 7
guess = -1

print("Guess the number")
while guess != number:
    guess = int(input("Is it ..."))
    if guess == number:
        print("Hooray! You guessed it right!")
    elif guess < number:
        print("It's bigger...")
    elif guess > number:
        print("It's bigger...")