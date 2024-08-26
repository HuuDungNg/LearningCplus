/**
 * @file Binary_Search.cpp
 * @author Nguyen Huu Dung (huudunga3@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-08-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

int binarySearch(int *arr, int left, int right, int target) {
    /* Base case: Element not found */
    if(left > right) {
        return -1;
    }

    int mid = left + (right - left) / 2;

    /* Base case: Element found */
    if(arr[mid] == target) {
        return mid;
    }

    if(arr[mid] > target) {
        /* Recursive case: search in the left half */
        return binarySearch(arr, left, mid - 1, target);
    } else {
        /* Recursive case: search in the right half*/
        return binarySearch(arr, mid + 1, right, target);
    }
}

int main() {
    int arr[] = {2, 3, 5, 6, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    int result = binarySearch(arr, 0, size - 1, target);

    if(result != -1) {
        std::cout << "Element found at index " << result << "\n";
    } else {
        std::cout << "Element not found" << "\n";
    }
}