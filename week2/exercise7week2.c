#include <stdio.h>

int main() {
    int n, length = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    printf("%d ", n);

    while (n != 1) {
        if (n % 2 == 0) { 
            n /= 2;        
        } else {          
            n = 3 * n + 1; 
        }
        printf("%d ", n);  
        length++;         
    }

    printf("\nLength of sequence: %d\n", length);

    return 0;
}
