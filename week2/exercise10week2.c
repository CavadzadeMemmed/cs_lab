#include <stdio.h>
#include <math.h>

int main() {
    double x0, y0, r;  

    printf("Enter the center of the circle (x0, y0): ");
    scanf("%lf %lf", &x0, &y0);
    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

    double xi, yi;  
    printf("Enter the points' coordinates (xi, yi). To end, press CTRL+C (EOF):\n");

    while (scanf("%lf %lf", &xi, &yi)) {

        double distance = sqrt(pow(xi - x0, 2) + pow(yi - y0, 2));

        if (distance < r) {
            printf("Point (%.2lf, %.2lf) is INSIDE the circle.\n", xi, yi);
        } else if (distance == r) {
            printf("Point (%.2lf, %.2lf) is ON the circle.\n", xi, yi);
        } else {
            printf("Point (%.2lf, %.2lf) is OUTSIDE the circle.\n", xi, yi);
        }
    }

    return 0;
}
