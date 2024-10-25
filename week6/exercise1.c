#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 1; i < n; i++) {  
        for (int j = 0; j < i; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of elements under the main diagonal: %d\n", sum);

    return 0;
}
