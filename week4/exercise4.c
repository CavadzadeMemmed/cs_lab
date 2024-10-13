#include <stdio.h>

int main() {
    int n, idx, el;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n + 1]; 

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index and element to insert: ");
    scanf("%d %d", &idx, &el);

    if (idx < 0 || idx > n) {
        printf("Invalid input\n");
    }

    for (int i = n; i > idx; i--) {
        arr[i] = arr[i - 1];
    }
    arr[idx] = el;

    printf("New array: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
