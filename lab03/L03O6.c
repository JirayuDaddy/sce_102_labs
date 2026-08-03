#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r,h,p;
    p=3.1416;
    printf("Enter r: ");
    scanf("%f", &r);
    printf("Enter h: ");
    scanf("%f", &h);
    printf("Circle area = %.2f\n", p*pow(r,2));
    printf("Sphere volume = %.2f\n", 4/3*p*pow(r,3));
    printf("Cylinder volume = %.2f\n", p*pow(r,2)*h);
    return 0;
}