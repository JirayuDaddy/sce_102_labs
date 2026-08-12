#include <stdio.h>

#define PI 3.1416

float circleArea(float r) {
    return PI * r * r;
}

float cylinVol(float r, float h) {
    return circleArea(r) * h;
}

int main() {
    float radius, height;

    printf("Circle and Cylinder Volume Calculator\n\n");

  
    printf("Circle\n");
    printf("Enter radius r: ");
    scanf("%f", &radius);

    float area = circleArea(radius);
    printf("Circle area %.2f\n\n", area);

    printf("Cylinder\n");
    printf("Enter height h: ");
    scanf("%f", &height);

    float volume = cylinVol(radius, height);
    printf("Cylinder volume %.2f\n", volume);

    return 0;
}