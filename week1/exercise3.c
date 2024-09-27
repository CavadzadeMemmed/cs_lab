#include <stdio.h>

int main(){
    float num1;

    printf("Enter an integer number: ");
    scanf("%f", &num1);

    if (num1 - (int)num1 == 0 && num1 > 0)
        {
        if ((int)num1 % 6 == 0)
            puts("Excellent");
        else if ((int)num1 % 2 == 0 || (int)num1 % 3 == 0)
            puts("Ok");
        else
            puts("No");
        }
    else
        printf("%.2f is not an integer.", num1);

    return 0;
}