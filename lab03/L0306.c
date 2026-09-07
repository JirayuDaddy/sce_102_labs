#include <stdio.h> 
#include <stdlib.h>
#include <math.h> 
 
int main()
{
    float r,h,pi;
    pi = 3.1416;
    printf("Enter r: ");
    scanf("%f", &r);
    printf("Enter h: ");
    scanf("%d", &h);
    printf("Circle area = %.2f\n", pi*r*r);
    printf("Sphere volume = %.2f\n", 4/3*pi*r*r*r);
    printf("Cylinder volume = %.2f\n",pi*r*r*h);
    return 0;

}