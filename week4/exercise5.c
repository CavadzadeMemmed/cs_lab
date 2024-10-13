#include <stdio.h>

int main() {
    int n, el, idx;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n + 1];  

    printf("Enter the sorted elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &el);

    idx = 0;
    while (idx < n && arr[idx] < el) {
        idx++;  
    }

    for (int i = n; i > idx; i--) {
        arr[i] = arr[i - 1];
    }

    arr[idx] = el;

    printf("%d\n", idx); 
    printf("New array: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
