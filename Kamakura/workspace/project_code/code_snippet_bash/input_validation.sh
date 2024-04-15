#!/bin/bash
read -p "Enter a number: " number
if [[ ! "$number" =~ ^[0-9]+$ ]]; then
    echo "Invalid input. Please enter a number."
else
    echo "You entered: $number"
fi
