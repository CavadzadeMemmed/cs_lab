#include <stdio.h>
#include <math.h>

int main(){
    float stick1, stick2, stick3;

    printf("Enter sizes of 3 sticks: ");
    scanf("%f%f%f", &stick1, &stick2, &stick3);

    if (stick1 > 0 && stick2 > 0 && stick3 > 0)
        if (stick1<=stick2+stick3 && stick1>=abs(stick2-stick3) && stick2<=stick1+stick3 && stick2>=abs(stick1-stick3) && stick3<=stick2+stick1 && stick3>=abs(stick2-stick1))
            puts("Ok");
        else
            puts("No");
    else
        puts("Sizes of sticks cannot be negative or zero");

    return 0;
}