#include <stdio.h> 
#include <stdlib.h> 
#define pi 3.1416
int main()
{
    float r,c,s,z =0;
    float h =0;
    printf("Enter r: ");
    scanf("%f",&r);
    printf("Enter h: ");
    scanf("%f",&h);
    c = pi * r*r;
    printf("Circle area = %.2f\n",c);
    s = (pi) * (r* r *r) * 4/3;
    printf("Sphere volume = %.2f\n",s);
    z = pi * r*r *h;
    printf("Cylinder volum = %.2f\n",z);
    return 0;


    
}