#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int h;
    float r,area,sphere,cylinder,pi;
    pi = 3.1416;
    printf("Enter r: ");
    scanf("%f", &r);
    printf("Enter h: ");
    scanf("%d", &h);
    area = pi * pow(r,2);
    printf("\nCircle area = %.2f\n", area);
    sphere = 4.0 / 3.0 * pi * pow(r,3);
    printf("\nSphere volume = %.2f\n", sphere);
    cylinder = pi * pow(r,2) * h;
    printf("\nCylinder volume = %.2f\n", cylinder);
    return 0;

}