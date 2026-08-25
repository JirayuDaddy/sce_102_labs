#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double circle(double radius)
{
    double pi = 3.1416;
    return pi * radius * radius;
}
double cylinvol(double radius, double height)
{
    double pi = 3.1416;
    return pi * radius * radius * height;
}

int main()
{
    int r, h;
    printf("Circle and Cylinder Volume Calculator\n");
    printf("\nCircle");
    printf("\nEnter radius r: ");
    scanf("%d", &r);
    double volume1 = circle(r);
    printf("Circle area %.2f\n", volume1);

    printf("\nCylinder");
    printf("\nEnter height h: ");
    scanf("%d", &h);
    double volume2 = cylinvol(r, h);
    printf("Cylinder volume %.2f", volume2);
    return 0;
}