#include <stdio.h>

int main() {
    int num, digit, result = 0, factor = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10; 
        if (digit != 0) {
            result += digit * factor;  
            factor *= 10; 
        }
        num /= 10; 
    }

    printf("Resulting number: %d\n", result);

    return 0;
}
