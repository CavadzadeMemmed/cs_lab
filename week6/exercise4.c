#include <stdio.h>

int main() {
    int n, m, k;
    scanf("%d %d", &n, &m);
    scanf("%d", &k);
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]*k);
        }
        puts("")
    }

    return 0;
}