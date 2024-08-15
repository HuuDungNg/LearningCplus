# Introduction to C++

## 1. History and Features of C++

C++ was developed by Bjarne Stroustrup in 1979 as an extension of the C programming language. It introduced object-oriented programming (OOP) to the C language while retaining its efficiency and low-level features. Over the years, C++ has evolved, incorporating features from various paradigms, including procedural, functional, and generic programming.

### Key Features of C++
- **Object-Oriented Programming (OOP):** Supports classes, inheritance, polymorphism, encapsulation, and abstraction.
- **Memory Management:** Provides fine-grained control over memory allocation and deallocation using pointers.
- **Multi-Paradigm Support:** Supports procedural, object-oriented, and generic programming styles.
- **Standard Template Library (STL):** A powerful library that includes common data structures and algorithms.
- **Cross-Platform:** C++ programs can be compiled and run on various platforms with minimal changes.

## 2. Setting Up the Development Environment

Before you start writing C++ programs, you need to set up a development environment. This typically involves installing a C++ compiler and an Integrated Development Environment (IDE).

### Installing a Compiler
- **Linux:** Most Linux distributions come with GCC (GNU Compiler Collection) pre-installed. If not, you can install it using:
  ```bash
  sudo apt-get install g++
- **Windows:** You can install MinGW (Minimalist GNU for Windows) which includes GCC.

### Setting Up an IDE
- **Visual Studio:** A popular choice on Windows that provides powerful features for C++ development.
- **Code::Blocks:** A lightweight and cross-platform IDE for C++.
- **Visual Studio Code:** A highly customizable and cross-platform editor that supports C++ through extensions.

### Configuring the Environment
- Ensure your compiler is properly set up by adding it to your system's PATH variable.
- Compile a simple test program to verify the installation.

### Compiling and Running
  ```bash
  g++ Helloworld.cpp -o Helloworld
  ./Helloworld
