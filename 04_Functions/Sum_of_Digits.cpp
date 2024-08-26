#include <iostream>

/**
 * @brief Calculate sum of 1 to n digits
 * 
 * @param num 
 * @return int 
 */
int Sum_of_Digits(int num) {
    if(num <=1 ) { /* base case */
        return 1;
    } else {
        return num + Sum_of_Digits(num - 1); /* Recrusive case */
    }
}

/**
 * @brief main function
 * 
 * @return int 
 */
int main() {
    int number = 4;
    std::cout << "Sum of digits of " << number;
    std::cout << " is " << Sum_of_Digits(number) << "\n";
    return 0;
}