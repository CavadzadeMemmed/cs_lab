#include <stdio.h>

int main() {
    int a, b, k, sum = 0;
    
    printf("enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("enter the integer: ");
    scanf("%d", &k);
    
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (i % k == 0) {
            sum += i; 
        }
    }
    
    printf("sum of elements: %d", sum);
    
    return 0;
}
