#include <stdio.h>

int main() {
    int n, m;

    scanf("%d %d", &n, &m);

    int matrix[n][m];
    int rowSums[n];
    int colSums[m];

    for (int i = 0; i < n; i++)
        rowSums[i] = 0;
    for (int j = 0; j < m; j++) 
        colSums[j] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j];  
            colSums[j] += matrix[i][j];  
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("| %d\n", rowSums[i]); 
    }

    for (int j = 0; j < m; j++) {
        printf("_ ");
    }
    puts("");

    for (int j = 0; j < m; j++) {
        printf("%d ", colSums[j]);
    }
    puts("");

    return 0;
}
