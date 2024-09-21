#include <stdio.h>
int main(){
    int x, y1, y2, y3;

    scanf("%d", &x);

    y1 = x*x - 2*x + 3;
    y2 = x - 5;
    y3 = x*x + 2*x - 3;

    if (x > 0)
        printf("%d", y1);
    else if (x == 0)
        printf("%d", y2);
    else
        printf("%d", y3);

    return 0;
}
