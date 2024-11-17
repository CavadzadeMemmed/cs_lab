#include<stdio.h>
int power(int num1, int num2){
    int res=1;
    for(int i=0; i<num2; i++)
        res*=num1;
    return res;
}
int recursive_power(int num1, int num2){
    if(num2==0)
        return 1;
    return num1*recursive_power(num1, num2-1);
}

int main(){
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("%d=%d^%d\n", power(a, b), a, b);
    printf("%d=%d^%d", recursive_power(a, b), a, b);
}