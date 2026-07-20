#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int h;
    float Circle_area,Sphere_volume,Cylinder_volume ;
    float pi=3.1416,r;

    printf("Enter r : ");
    scanf("%f",&r);
    printf("Enter h : ");
    scanf("%d",&h);

    Circle_area = pi * pow(r,2) ;
    Sphere_volume = 4.0/3.0 * pi * pow(r,3) ;
    Cylinder_volume = pi * pow(r,2) * h ;

    printf("Circle area = %.2f\n",Circle_area);
    printf("Sphere volume = %.2f\n",Sphere_volume);
    printf("Cylinder volume = %.2f\n",Cylinder_volume);

    return 0;
}