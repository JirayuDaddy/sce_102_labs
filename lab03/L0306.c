#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 float r,h,r2,r3,x,y,z,pi =3.1416;
 printf("Enter r :");
 scanf("%f",&r);
 printf("Enter h :");
 scanf("%f",&h);
 r2 = pow(r,2);
 x=pi*r2;
 printf("cricle area =%.2f\n",x);
 r3= pow(r,3);
 y=4.0/3.0*pi*r3;
 printf("sphere volume =%.2f\n",y);
 z=pi*r2*h;
 printf("cylinder volme=%.2f\n",z);
 
    return 0;


}