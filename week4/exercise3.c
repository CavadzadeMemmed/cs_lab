#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter the number of elements and the number of elements per line (k): ");
    scanf("%d %d", &n, &k);

    int arr[n];

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);

        if ((n - i) % k == 0) {
            printf("\n");
        }
    }

    return 0;
}
