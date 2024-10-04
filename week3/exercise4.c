#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0.0;

    printf("enter the number of floats: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%f", &num); 
        sum += num;        
    }

    printf("sum: %.1f", sum);

    return 0;
}