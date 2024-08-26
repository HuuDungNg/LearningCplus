#include <iostream>

int fibonacci(int num) {
    if(num <= 1) { /* Base case */
        return num;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main() {
    int position = 2;
    std::cout << "Fibonacci number at position " << position;
    std::cout << " is " << fibonacci(position) << "\n";
    return 0;
}