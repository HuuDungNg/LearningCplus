# Control Flow in C++

This section covers the control flow mechanisms in C++ that allow you to dictate the order in which statements and code blocks are executed. Mastering control flow is essential for writing efficient and logical programs.

## Table of Contents

1. [Conditional Statements (`if`, `else`, `else if`)](#conditional-statements-if-else-else-if)
2. [Switch Case](#switch-case)
3. [Loops (`for`, `while`, `do-while`)](#loops-for-while-do-while)
4. [`break`, `continue`, and `goto` Statements](#break-continue-and-goto-statements)

## 1. Conditional Statements (`if`, `else`, `else if`)

Conditional statements are used to perform different actions based on different conditions. The most commonly used conditional statements in C++ are:

- **`if` Statement:** Executes a block of code if the condition evaluates to true.
- **`else` Statement:** Executes a block of code if the condition in the `if` statement is false.
- **`else if` Statement:** Specifies a new condition if the first `if` condition is false.

Example:

```cpp
int number = 10;

if (number > 0) {
    std::cout << "The number is positive." << std::endl;
} else if (number < 0) {
    std::cout << "The number is negative." << std::endl;
} else {
    std::cout << "The number is zero." << std::endl;
}
```

Explanation
- `if` Statement: Checks a condition and executes the block of code if the condition is true.
- `else if` Statement: Allows you to check multiple conditions.
- `else` Statement: Executes a block of code if none of the previous conditions are true.

## 2. Switch Case

The `switch` statement provides an alternative to `if-else` when you have multiple possible values for a single variable.

Example:

```cpp
char grade = 'B';

switch (grade) {
    case 'A':
        std::cout << "Excellent!" << std::endl;
        break;
    case 'B':
    case 'C':
        std::cout << "Well done!" << std::endl;
        break;
    case 'D':
        std::cout << "You passed." << std::endl;
        break;
    case 'F':
        std::cout << "Better try again." << std::endl;
        break;
    default:
        std::cout << "Invalid grade." << std::endl;
        break;
}
```

Explanation
- `switch` Statement: Evaluates a variable and executes the corresponding case block.
- `case`: Each case represents a possible value for the variable.
- `break`: Exits the switch statement once a case is executed.
- `default`: Executes if no case matches the variable's value.

## 3. Loops (`for`, `while`, `do-while`)

Loops allow you to repeat a block of code multiple times.

### `for` Loop

- `for` Loop: Used when the number of iterations is known beforehand.

```cpp
for (int i = 0; i < 5; i++) {
    std::cout << "i = " << i << std::endl;
}
```

### `while` Loop

- `while` Loop: Repeats a block of code as long as the condition is true.

```cpp
int count = 0;

while (count < 5) {
    std::cout << "count = " << count << std::endl;
    count++;
}
```

### `do-while` Loop

- `do-while` Loop: Similar to while, but ensures the block of code is executed at least once.

```cpp
int number = 0;

do {
    std::cout << "number = " << number << std::endl;
    number++;
} while (number < 5);
```

## 4. `break`, `continue`, and `goto` Statements

These statements provide additional control over loops and program flow.

### `break` Statement

- `break`: Exits the loop or switch statement immediately.

```cpp
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break; // Exits the loop when i equals 5
    }
    std::cout << "i = " << i << std::endl;
}
```

### `continue` Statement

- `continue`: Skips the rest of the current loop iteration and moves to the next iteration.

```cpp
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        continue; // Skips the rest of the loop when i equals 5
    }
    std::cout << "i = " << i << std::endl;
}
```

### `goto` Statement

- `goto`: Transfers control to a labeled statement, often considered bad practice in modern programming due to the potential for creating complex and unmanageable cod

```cpp
int i = 0;

start:
std::cout << "i = " << i << std::endl;
i++;
if (i < 5) {
    goto start; // Jumps back to the start label
}
```