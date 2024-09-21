#include <stdio.h>
int main(){
    int num1;

    scanf("%d", &num1);

    if (num1 > 0)
        if (num1 % 2 == 0)
            printf("%d is even", num1);
        else
            printf("%d is odd", num1);
    else
        printf("%d is neither odd nor even", num1);
    
    return 0;
}