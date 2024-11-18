#include<stdio.h>
#include<math.h>
int point(float x0, float y0, float r, float x, float y){
    float dist = sqrt(pow(x0-x, 2) + pow(y0-y, 2));
    if (dist < r)
        return -1;
    else if (dist > r)
        return 1;
    else
        return 0;
}
int main(){
    float x01, y01, r1, x1, y1;
    printf("Please, enter x0, y0, r, x, y: ");
    scanf("%f %f %f %f %f", &x01, &y01, &r1, &x1, &y1);
    int res = point(x01, y01, r1, x1, y1);
    if (-1 == res)
        printf("point (%.2f,%.2f) is inside of the circle", x1, y1);
    else if (1 == res)
        printf("point (%.2f,%.2f) is outside of the circle", x1, y1);
    else 
        printf("point (%.2f,%.2f) is on the circle", x1, y1);
}