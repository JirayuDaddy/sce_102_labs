#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int h ;
    float Circle_area, Sphere_volume , Cylinder_volume,pi,r;
    pi = 3.1416;
    
    printf("Enter r : ");
    scanf("%f",&r);
    printf("Enter h : ");
    scanf("%d",&h);
    Circle_area = pi * pow (r,2);
    printf("\nCircle area = %.2f",Circle_area);
    Sphere_volume = 4 / 3 * pi * pow (r,3);
    printf("\nSphere volume = %.2f",Sphere_volume);
    Cylinder_volume = pi * pow(r,2) * h;
    printf("\nCylinder volume = %.2f",Cylinder_volume);

    return 0;

}