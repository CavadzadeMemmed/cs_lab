#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("Harmonic sum of first %d terms: %.3f\n", n, sum);

    return 0;
}
