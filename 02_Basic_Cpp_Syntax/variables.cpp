/**
 * @file variables.cpp
 * @author Nguyen Huu Dung (huudunga3@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-08-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <iomanip>      // std::setw(n), std::setfill(ch)
                        // std::left, std::right

/**
 * CONSTANTS
 */
 const int MAX_VALUE = 100;

/**
 * Variables definition
 */
int age = 25;
float height = 17.4f;
double pi = 3.14159;
char grade = 'A';
bool isStudent = true;

/**
 * @brief Main function
 * 
 * @return int 
 */
int main() {
    std::cout << "Variables and Constants" << std::endl;

    std::cout << std::setw(10) << std::left << "Age";
    std::cout << std::setw(40) << std::left << age << std::endl;
    std::cout << std::setfill('-') << std::setw(55) << "-" << std::setfill(' ') << std::endl;
    std::cout << std::setw(10) << std::left << "Height";
    std::cout << std::setw(40) << std::left << height << std::endl;

    std::cout << std::setw(10) << std::left << "pi";
    std::cout << std::setw(40) << std::left << pi << std::endl;

    std::cout << std::setw(10) << std::left << "Grade";
    std::cout << std::setw(40) << std::left << grade << std::endl;

    std::cout << std::setw(10) << std::left << "student";
    std::cout << std::setw(40) << std::left << isStudent << std::endl;
    return 0;
}
