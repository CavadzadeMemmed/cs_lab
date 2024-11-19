#include <stdio.h>
#include <math.h>

int point(float x0, float y0, float r, float x, float y) {
    float dist = sqrt(pow(x - x0, 2) + pow(y - y0, 2));

    if (dist < r)
        return -1;
    else if (dist > r)
        return 1; 
    else
        return 0;
}

int main() {
    float x0, y0, r;

    printf("Enter the circle's center (x0, y0) and radius (r): ");
    scanf("%f %f %f", &x0, &y0, &r);

    int n;
    printf("Enter the number of points: ");
    scanf("%d", &n);

    float points[n][2];

    printf("Enter the coordinates of the points (x y):\n");
    for (int i = 0; i < n; i++) {
        scanf("%f %f", &points[i][0], &points[i][1]);
    }

    printf("\nResults:\n");
    for (int i = 0; i < n; i++) {
        float x = points[i][0];
        float y = points[i][1];
        int result = point(x0, y0, r, x, y);

        if (result == -1)
            printf("Point (%.2f, %.2f) is inside the circle.\n", x, y);
        else if (result == 1)
            printf("Point (%.2f, %.2f) is outside the circle.\n", x, y);
        else
            printf("Point (%.2f, %.2f) is on the circle.\n", x, y);
    }

    return 0;
}
