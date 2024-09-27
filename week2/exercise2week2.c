#include <stdio.h>

int main() {
    int a, b, k, temp, current;
    int total_sum = 0;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    current = a;

    while (current <= b) {
        if (current % k == 0) {
            total_sum += current;
        }
        current++;
    }

    printf("The sum of numbers in the range [%d, %d] that are divisible by %d is: %d\n", a, b, k, total_sum);

    return 0;
}
