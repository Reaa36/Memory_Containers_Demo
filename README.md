# Memory Management and Data Manipulation in C++

This repository contains a C++ program that demonstrates various techniques for memory management, data manipulation, and usage of standard containers like `vector` and `map`. The code is structured into multiple functions, each illustrating different aspects of C++ programming.

## Overview

The main program showcases the following:

1. **Local Memory Allocation**: 
   - Demonstrates the creation and manipulation of a local array on the stack.
   
2. **Dynamic Memory Allocation**: 
   - Illustrates how to allocate and deallocate memory on the heap using raw pointers and the `new`/`delete` operators.
   
3. **Vector Usage**: 
   - Shows how to use `std::vector` to dynamically manage a collection of elements.
   
4. **Smart Pointers**: 
   - Demonstrates memory management using `std::unique_ptr` to automatically handle dynamic memory.
   
5. **Passing Arrays by Reference**: 
   - Shows how to pass arrays by reference to functions to modify their content.
   
6. **Map Operations**: 
   - Illustrates how to use `std::map` to associate keys with values, and how to modify the contents of a map.

## Functions

- **`int* allocateAndFillArray(int size)`**: 
  - Allocates a dynamic array and fills it with the squares of its indices.
  
- **`void localMemoryExample()`**: 
  - Creates and manipulates a local array, printing its contents.
  
- **`void dynamicMemoryExample(int size)`**: 
  - Uses dynamic memory allocation to create an array, fills it, prints its contents, and then deallocates the memory.
  
- **`void vectorExample(int size)`**: 
  - Demonstrates the use of `std::vector` for dynamic array management, filling it with squared values.
  
- **`void uniquePtrExample(int size)`**: 
  - Shows how to use `std::unique_ptr` for automatic memory management with dynamic arrays.
  
- **`void modifyArrayByReference(int (&array)[10])`**: 
  - Modifies an array passed by reference by multiplying each element by 2.
  
- **`void referenceExample()`**: 
  - Demonstrates passing arrays by reference to modify their contents.
  
- **`void mapExample()`**: 
  - Demonstrates the use of `std::map` to store and manipulate key-value pairs.

## Usage

1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/your-repository-name.git
    ```

2. Compile the program using a C++ compiler (e.g., `g++`):
    ```bash
    g++ main.cpp -o memory_example
    ```

3. Run the compiled program:
    ```bash
    ./memory_example
    ```

4. Follow the on-screen instructions to observe the different memory management and data manipulation techniques.

## Development Environment

This project was developed using the **Code::Blocks** integrated development environment (IDE). Code::Blocks provides a user-friendly interface for C++ development and was chosen for its compatibility and ease of use.

