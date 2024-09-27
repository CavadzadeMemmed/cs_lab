#include <stdio.h>

int main(){
    float x, y1, y2, y3;

    printf("Enter a number: ");
    scanf("%f", &x);

    y1 = x*x - 2*x + 3;
    y2 = x - 5;
    y3 = x*x + 2*x - 3;

    if (x > 0)
        printf("%.2f", y1);
    else if (x == 0)
        printf("%.2f", y2);
    else
        printf("%.2f", y3);

    return 0;
}
