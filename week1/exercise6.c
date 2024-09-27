#include <stdio.h>

int main(){
    float t1, t2, t3, t4;

    printf("Enter 4 positive numbers(times): ");
    scanf("%f%f%f%f", &t1, &t2, &t3, &t4);
    
    if (t1 > 0 && t2 > 0 && t3 > 0 && t4 >0)
        if (t1 == t2 && t2 == t3 && t3 == t4)
            printf("They would finish at the same time in %.2f hours.", t1);
        else{
            printf("The max time is ");
            if (t1 >= t2 && t1 >= t3 && t1>=t4)
                printf("%.2f hours", t1);
            else if (t2 >= t1 && t2 >= t3 && t2>=t4)
                printf("%.2f hours", t2);
            else if (t3 >= t1 && t3 >= t2 && t3>=t4)
                printf("%.2f hours", t3);
            else
                printf("%.2f hours", t4);
            }
    else
        puts("Not appropriate input");

    return 0;
}