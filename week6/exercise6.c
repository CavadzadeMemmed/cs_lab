#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int matrix[n][n];
    int isIdentity = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j && matrix[i][j] != 1) {
                isIdentity = 0;
            }
            else if (i != j && matrix[i][j] != 0) {
                isIdentity = 0;
            }
        }
    }
    if (isIdentity) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
