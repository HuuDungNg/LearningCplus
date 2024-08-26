/**
 * @file Sum_of_Array.cpp
 * @author Nguyen Huu Dung (huudunga3@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-08-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

/**
 * @brief calculate sum of all array elements
 * 
 * @param arr 
 * @param size 
 * @return int 
 */
int sumArray(int *arr, int size) {
    if(size <= 0) {
        return 0;
    } else {
        return arr[size - 1] + sumArray(arr,size -1);
    }
}

/**
 * @brief main function
 * 
 * @return int 
 */
int main() {
    int arr[] = {1, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Sum of array ís " << sumArray(arr,size) << "\n";
    return 0;
}