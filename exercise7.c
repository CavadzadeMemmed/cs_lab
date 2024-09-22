#include <stdio.h>

int main(){
    float width, length, height, radius;
    
    width = 8.2;
    length = 6.1;
    height = 10.5;

    printf("Enter radius of ball: ");
    scanf("%f", &radius);

    if (radius > 0)
        if (width >= 2*radius && length >= 2*radius && height >= 2*radius)
            puts("The box is appropriate for the ball.");
        else
            puts("The box is too small for the ball.");
    else
        puts("Radius cannot be negative or zero");

    return 0;
}