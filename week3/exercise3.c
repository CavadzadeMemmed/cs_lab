#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("harmonic sum: %.3f",sum);

    return 0;
}