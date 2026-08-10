#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416

float circleArea(float radius) {
    return PI * radius * radius;
}
float cylinVol(float height, float radius) {
    return circleArea(radius) * height;
}
int main() {
    float radius, height;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = circleArea(radius);

    printf("Area of the circle: %.2f\n", area);

     printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    printf("Volume of the cylinder: %.2f\n", cylinVol(height, radius));
     float volume = cylinVol(height, radius);

    return 0;
}