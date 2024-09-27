#include <stdio.h>

int main() {
    int n, i, x;
    long long product = 1;
    int sum = 0;
    
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        x = 3 * i - 1;
        sum += x;
        product *= x;
    }
    
    printf("Sum of the first %d elements: %d\n", n, sum);
    printf("Product of the first %d elements: %lld\n", n, product);

    return 0;
}
