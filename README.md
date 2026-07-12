# Matrix Input and Display

A simple C program that creates a matrix with user-defined dimensions, fills it with integer values, and prints the matrix to the console.

## Features

* User selects the number of rows and columns.
* Input validation ensures only positive integers are accepted.
* Uses a Variable Length Array (VLA) to create the matrix dynamically based on user input.
* Displays the completed matrix in a readable format.

## Concepts Practiced

* Functions
* Input validation
* Nested loops
* Two-dimensional arrays
* Variable Length Arrays (VLA)
* User interaction through the console

## Example

Enter a valid value for row count: 2

Enter a valid value for column count: 3

Give value for [0] [0]: 1

Give value for [0] [1]: 2

Give value for [0] [2]: 3

Give value for [1] [0]: 4

Give value for [1] [1]: 5

Give value for [1] [2]: 6

Here is your matrix!

1 2 3

4 5 6

## What I Learned

While building this project, I practiced working with 2D arrays, nested loops, function decomposition, and input validation. I also learned how to prevent invalid user input from causing infinite input loops by clearing the input buffer when necessary.
