#include <stdio.h>

int main(){
    int num, digit1, digit2, digit3;

    scanf("%d", &num);

    digit1 = num / 100;
    digit2 = (num % 100) / 10;
    digit3 = num % 10;
    
    if (num > 0)
        if (digit1 == digit2 && digit2 == digit3)
            puts("They are all the same.");
        else{
            printf("The max is ");
            if (digit1 >= digit2 && digit1 >= digit3)
                printf("%d\n", digit1);
            else if (digit2 >= digit1 && digit2 >= digit3)
                printf("%d\n", digit2);
            else
                printf("%d\n", digit3);
            }
    else
        puts("Not appropriate intput");
    
    return 0;
}