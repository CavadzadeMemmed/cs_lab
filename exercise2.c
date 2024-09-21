#include <stdio.h>

int main(){
    float num1;

    printf("Enter an integer number: ");
    scanf("%f", &num1);

    if (num1 - (int)num1 == 0)
        {
        if (num1 > 0)
            if ((int)num1 % 2 == 0)
                printf("%.0f is even", num1);
            else
                printf("%.0f is odd", num1);
        else
            printf("%.2f is neither odd nor even", num1);
        }
    else
        printf("%.2f is not integer", num1);
    
    return 0;
}