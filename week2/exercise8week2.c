#include <stdio.h>

int main() {
    int n, i, fib0 = 0, fib1 = 1, fibn;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0)
        printf("Fibonacci number: %d\n", fib0);
    else if (n == 1) 
        printf("Fibonacci number: %d\n", fib1);
    

    for (i = 2; i <= n; i++) 
    {
        fibn = fib0 + fib1;  
        fib0 = fib1;        
        fib1 = fibn;         
    }

    printf("Fibonacci number: %d\n", fibn);

    return 0;
}
