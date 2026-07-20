#include <stdio.h>
#include <math.h>

int main(void) {
    float r, h;
    const float pi = 3.1416f;
    float circleArea, sphereVolume, cylinderVolume;

    printf("Enter r: ");
    scanf("%f", &r);
    printf("Enter h: ");
    scanf("%f", &h);

    circleArea     = pi * pow(r, 2);
    sphereVolume   = (4.0 / 3.0) * pi * pow(r, 3);
    cylinderVolume = pi * pow(r, 2) * h;

    printf("\nCircle area = %.2f\n", circleArea);
    printf("Sphere volume = %.2f\n", sphereVolume);
    printf("Cylinder volume = %.2f\n", cylinderVolume);

    return 0;
}
