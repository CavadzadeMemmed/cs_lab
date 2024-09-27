#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0.0;

    printf("Enter the number of floats (n): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%f", &num); 
        sum += num;        
    }

    printf("Sum: %.1f\n", sum);

    return 0;
}
