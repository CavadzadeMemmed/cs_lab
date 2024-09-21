#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, D, x1, x2;

    scanf("%d%d%d", &a, &b, &c);

    D = b*b - 4*a*c;
    x1 = (-b - pow(D, 0.5))/(2*a);
    x2 = (-b + pow(D, 0.5))/(2*a);

    if (D > 0)
        printf("x1=%d, x2=%d", x1, x2);
    else if (D == 0)
        printf("x1=x2=%d", x1);
    else
        printf("No roots");
    
    return 0;
}