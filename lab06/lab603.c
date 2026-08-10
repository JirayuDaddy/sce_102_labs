#include <stdio.h>

#define PI 3.1416


float circleArea(float r) {
    return PI * r * r;
}


float cylinVol(float r, float h) {
    return circleArea(r) * h;
}

int main() {
    float r, h;

    printf("Circle and Cylinder Volume Calculator\n");

    printf("Circle\n");
    printf("Enter radius r: ");
    scanf("%f", &r);

    printf("Circle area %.2f\n", circleArea(r));

    printf("Cylinder\n");
    printf("Enter height h: ");
    scanf("%f", &h);

    printf("Cylinder volume %.2f\n", cylinVol(r, h));

    return 0;
}