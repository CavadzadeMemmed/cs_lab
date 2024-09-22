#include <stdio.h>
#include <math.h>

int main() {
    float x0, y0, x, y, r, distanceSquared, radiusSquared;

    printf("Enter the circle's center coordinates (x0, y0) and radius (r): ");
    scanf("%f %f %f", &x0, &y0, &r);
    
    printf("Enter the point's coordinates (x, y): ");
    scanf("%f %f", &x, &y);

    distanceSquared = pow(x - x0, 2) + pow(y - y0, 2);
    radiusSquared = pow(r, 2);

    if (distanceSquared == radiusSquared)
        puts("ON the circle");
    else if (distanceSquared < radiusSquared)
        puts("INSIDE the circle");
    else
        puts("OUTSIDE the circle");

    return 0;
}

