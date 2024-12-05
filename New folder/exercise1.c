#include <stdio.h>

int findMax(int *arr, int length) {
    int *ptr = arr; 
    int max = *ptr; 

    for (int i = 1; i < length; i++) {
        ptr++; 
        if (*ptr > max) {
            max = *ptr; 
        }
    }

    return max;
}

int main() {
    int arr[] = {3, 7, 2, 9, 5}; 
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Max is %d\n", findMax(arr, length));

    return 0;
}

