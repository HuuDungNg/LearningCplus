#include <iostream>

/**
 * @brief factorial number
 * 
 * @param num 
 * @return int 
 */
int factorial(int num) {
    if(num <= 1) {    /* Base case */
        return 1;
    } else {
        return num * factorial(num - 1); /* Recursive case */
    }
}

/**
 * @brief main function
 * 
 * @return int 
 */
int main() {
    int number;
    std::cout << "Number to calculate is ";
    std::cin >> number; /* get number from keyboard */
    std::cout << "Factorial of " << number;
    std::cout << " is " << factorial(number) << std::endl;
    return 0;
}