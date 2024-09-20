#include <stdio.h>

int main()
{   
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    if (num1 == num2 && num2 == num3)
    {
        printf("They are all the same.\n");
    }
    else
    {
        printf("The max is ");
        if (num1 >= num2 && num1 >= num3)
            printf("%d\n", num1);
        else if (num2 >= num1 && num2 >= num3)
            printf("%d\n", num2);
        else
            printf("%d\n", num3);
    }
    
    return 0;
}
