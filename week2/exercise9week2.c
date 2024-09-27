#include <stdio.h>
#include <math.h>  

long long factorial(int num) {
    if (num == 0 || num == 1) return 1;
    long long fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

double taylor_sin(double x, int n) {
    double sin_approx = 0;
    for (int i = 0; i < n; i++) {
        double term = pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
        sin_approx += term;
    }
    return sin_approx;
}

int main() {
    double x;
    int n;

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double taylor_result = taylor_sin(x, n);

    double math_sin_result = sin(x);

    printf("Taylor series approximation of sin(%.4lf) with %d terms: %.8lf\n", x, n, taylor_result);
    printf("sin(%.4lf) using math.h: %.8lf\n", x, math_sin_result);
    printf("Difference: %.8lf\n", fabs(taylor_result - math_sin_result));

    return 0;
}
