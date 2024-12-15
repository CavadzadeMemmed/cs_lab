#include <stdio.h>

// Function to find the maximum element using pointers
int findMax(int *arr, int size) {
    int max = *arr;  // Assume the first element is the maximum
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {  // Use pointer arithmetic to access array elements
            max = *(arr + i);  // Update max if a larger element is found
        }
    }
    return max;
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate size of the array

    // Call the function to find the maximum element
    int max = findMax(arr, size);

    // Print the maximum element
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}
