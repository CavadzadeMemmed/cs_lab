#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("Elements less than the average (%.3f):\n", average);
    for(i = 0; i < n; i++) {
        if(arr[i] < average) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
