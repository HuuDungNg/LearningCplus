# Functions in C++

Functions are a core concept in C++ programming. They allow you to encapsulate code into reusable blocks, making your programs more modular and maintainable. This section covers function declarations, definitions, parameters, return values, overloading, inline functions, and recursion.

## Table of Contents

1. [Function Declaration and Definition](#1-function-declaration-and-definition)
2. [Function Parameters and Return Values](#2-function-parameters-and-return-values)
3. [Function Overloading](#3-function-overloading)
4. [Inline Functions](#4-inline-functions)
5. [Recursion](#5-recursion)

---

## 1. Function Declaration and Definition

A function in C++ has two main parts: the declaration (or prototype) and the definition.

### Function Declaration

The declaration specifies the function's name, return type, and parameters but does not include the function body. It informs the compiler about the function's existence.

```cpp
int add(int a, int b); // Function declaration
```

### Function Definition

The definition provides the actual implementation of the function, including the function body.

```cpp
int add(int a, int b) { // Function definition
    return a + b;
}
```

### Example

```cpp
#include <iostream>

int add(int a, int b); // Declaration

int main() {
    int result = add(3, 4);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

int add(int a, int b) { // Definition
    return a + b;
}
```

---

## 2. Function Parameters and Return Values

Functions can accept inputs (parameters) and return outputs (return values).

### Function Parameters

Parameters are variables that you pass to a function. They allow you to provide input data to the function.

```cpp
void printMessage(std::string message) {
    std::cout << message << std::endl;
}
```

### Return Values

Functions can return a value using the `return` statement. The return type must be specified in the function declaration.

```cpp
int square(int x) {
    return x * x;
}
```

### Example

```cpp
#include <iostream>

int multiply(int x, int y) {
    return x * y;
}

int main() {
    int product = multiply(5, 4);
    std::cout << "Product: " << product << std::endl;
    return 0;
}
```

---

## 3. Function Overloading

Function overloading allows you to define multiple functions with the same name but different parameter lists. The appropriate function is called based on the arguments provided.

### Example

```cpp
#include <iostream>

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    std::cout << "int add: " << add(3, 4) << std::endl;        // Calls int version
    std::cout << "double add: " << add(3.5, 4.5) << std::endl; // Calls double version
    return 0;
}
```

### Explanation

- The compiler selects the function to call based on the number and types of arguments provided.

---

## 4. Inline Functions

Inline functions are functions where the compiler attempts to expand the function's code at the point of the call rather than generating a regular function call. This can help optimize performance for small, frequently called functions.

### Example

```cpp
#include <iostream>

inline int square(int x) {
    return x * x;
}

int main() {
    int result = square(5);
    std::cout << "Square: " << result << std::endl;
    return 0;
}
```

### Explanation

- Inline functions can reduce the overhead of function calls but should be used judiciously for small functions.

---

## 5. Recursion

Recursion is a technique where a function calls itself to solve a problem that can be divided into smaller, similar problems. A recursive function must have a base case to terminate the recursion.

### Example: Recursive Function to Calculate Factorial

```cpp
#include <iostream>

int factorial(int n) {
    if (n <= 1) { // Base case
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}

int main() {
    int result = factorial(5);
    std::cout << "Factorial: " << result << std::endl;
    return 0;
}
```

### Explanation

- **Base Case:** The condition under which the recursion stops.
- **Recursive Case:** The part where the function calls itself with a modified argument.

---
