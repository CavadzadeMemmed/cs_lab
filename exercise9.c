#include <stdio.h>

int main(){
    int num, digit1, digit2, digit3, num1, num2, num3, max;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    digit1 = num / 100;
    digit2 = (num % 100) / 10;
    digit3 = num % 10;

    if (digit1 > 0)
        num1 = digit1;
    else
        num1 = 1;

    if (digit2 > 0)
        num2 = digit2;
    else 
        num2 = 1;

    if (digit3 > 0)
        num3 = digit3;
    else
        num3 = 1;

    max = num1 * num2 * num3;
    printf("%d is the maximum number produced by multiplying digits of %d", max, num);

    return 0;
}
