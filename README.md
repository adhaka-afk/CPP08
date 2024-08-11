# CPP08


## Description:

This module is designed to deepen your understanding of C++ Standard Template Library (STL) containers and algorithms. You will be required to use STL containers and algorithms to solve a series of exercises. The key objective is to familiarize yourself with the power and flexibility of STL while adhering to best practices in template programming.

## Module Rules:

- Use of STL: You are expected to use STL containers (e.g., vector, list, map) and algorithms (e.g., those defined in <algorithm> header) extensively. Failing to use STL, even if your code works, will result in a poor grade.
- Templates: Templates must be used wherever appropriate. Template definitions should be placed in header files, with optional implementation in .tpp files.
- Testing: Comprehensive tests are crucial for each exercise to ensure correctness and robustness of your implementations.

## Overview:

The module consists of three exercises:

## Exercise 00: Easy Find
- Objective: Implement a template function easyfind that searches for an integer in a container.
  
**Key Features:**
- Accepts a container of integers (T) and an integer to find.
- Returns the first occurrence of the integer in the container.
- If the integer is not found, it either throws an exception or returns an error value.

## Exercise 01: Span
- Objective: Develop a Span class to store a maximum of N integers and compute the shortest and longest spans between them.
  
**Key Features:**
- Constructor: Takes an unsigned int N to set the maximum capacity.
- addNumber: Adds a single number to the Span. If the capacity is exceeded, throws an exception.
- shortestSpan: Returns the shortest span (distance) between any two numbers in the Span.
- longestSpan: Returns the longest span (distance) between any two numbers in the Span.
- Range Addition: Implement a method to add multiple numbers using a range of iterators.
- Test with at least 10,000 numbers to ensure efficiency and correctness.

## Exercise 02: Mutated Abomination
- Objective: Create a MutantStack class that extends the std::stack by making it iterable.
  
**Key Features:**
- Inheritance: Inherits from std::stack and adds iterator functionality.
- Iterators: Implement begin() and end() member functions to allow iteration over the stack’s elements.
- This exercise challenges us to blend stack operations with iterator behavior, making std::stack more versatile.

## File Structure: 
- ex00/: Contains the implementation of the easyfind function template.
- ex01/: Contains the implementation of the Span class.
- ex02/: Contains the implementation of the MutantStack class.
- Makefile: Each directory contains a Makefile for compiling the respective exercise.
- main.cpp: Each directory includes a main.cpp file with test cases to demonstrate and verify functionality.

## Compilation and Execution:

Navigate to the Exercise Directory: Open a terminal and change to the directory of the exercise you want to run.
 ```bash
cd ex00  # Replace 'ex00' with the exercise directory you want to run
```
Compile the Code: Use the provided Makefile to compile the code.
 ```bash
make
```
Run the Executable: After successful compilation, run the generated executable.
```bash
./ex00_test  # Replace 'ex00_test' with the name of the executable for the exercise
```
Verify Output: Check the output in the terminal to verify the correctness of the program.
   
Clean Up (Optional): To clean up the compiled files, you can use the clean/fclean target in the Makefile.
 ```bash
make clean
```
or 
 ```bash
make fclean
```

## Conclusion:

By completing this module, we gain practical experience in leveraging the power of C++ STL containers and algorithms. Each exercise is designed to challenge our understanding and encourages us to write efficient, reusable, and type-safe code.

## 🚀 Next Project

[CPP09](https://github.com/adhaka-afk/CPP09)

## ⏳ Previous Project

[CPP07](https://github.com/adhaka-afk/CPP07)


