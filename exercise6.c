#include <stdio.h>

int main(){
    int t1, t2, t3, t4;

    scanf("%d%d%d%d", &t1, &t2, &t3, &t4);

    if (t1 == t2 && t2 == t3 && t3 == t4)
        puts("They are all the same.");
    else{
        printf("The max time is ");
        if (t1 >= t2 && t1 >= t3 && t1>=t4)
            printf("%d\n", t1);
        else if (t2 >= t1 && t2 >= t3 && t2>=t4)
            printf("%d\n", t2);
        else if (t3 >= t1 && t3 >= t2 && t3>=t4)
            printf("%d\n", t3);
        else
            printf("%d\n", t4);
        }

    return 0;
}