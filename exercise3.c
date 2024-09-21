#include <stdio.h>

int main(){
    int num1;

    scanf("%d", &num1);

    if (num1 % 6 == 0)
        puts("Excellent");
    else if (num1 % 2 == 0 || num1 % 3 == 0)
        puts("Ok");
    else
        puts("No");

    return 0;
}