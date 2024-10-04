#include <stdio.h>

int main() {
    int n;
    long long product = 1;  
    int sum = 0; 
    
    printf("enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int xi = 2 * i + 1;  
        sum += xi;          
        product *= xi;       
    }

    printf("sum: %d\n", sum);
    printf("product: %lld\n", product);

    return 0;
}
