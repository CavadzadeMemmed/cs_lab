#include <stdio.h>

void reverseArray(double *arr, int size) {
    double *start = arr;           
    double *end = arr + size - 1;  

    while (start < end) {
        double temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void printArray(double *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

int main() {
    double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    puts("Reversed array:");
    printArray(arr, size);

    return 0;
}
