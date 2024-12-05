#include <stdio.h>

void shiftLeft(short *arr, int size) {
    short temp = arr[0]; 

    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[size - 1] = temp;
}

void printArray(short *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    short arr1[] = {3, 5, 6, 3, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    shiftLeft(arr1, size1);

    printf("Shifted array: ");
    printArray(arr1, size1);

    return 0;
}
