#include<stdio.h>
int isEven(int number){
    return number % 2 == 0;
}
int main(){
    int num;
    printf("Enter a positive integer number: ");
    scanf("%d", &num);
    if (isEven(num) == 1)
        printf("%d is even", num);
    else
        printf("%d is odd", num);
}