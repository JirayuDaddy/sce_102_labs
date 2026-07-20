#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float r, h;
    float circle_area, sphere_volume, cylinder_volume;
    const float pi = 3.1416;

    printf("Enter r: ");
    scanf("%f", &r);
    printf("Enter h: ");
    scanf("%f", &h);

    circle_area = pi * pow(r, 2);
    sphere_volume = (4.0 / 3.0) * pi * pow(r, 3);
    cylinder_volume = pi * pow(r, 2) * h;

    printf("\nCircle area = %.2f\n", circle_area);
    printf("\nSphere volume = %.2f\n", sphere_volume);
    printf("\nCylinder volume = %.2f\n", cylinder_volume);
    return 0;
}
