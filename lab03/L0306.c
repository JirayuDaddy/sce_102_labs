#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   float r,r2,r3,h,cr,sv,cv,pi =3.1416;
   printf("Enter r: ");
   scanf("%f",&r);
   printf("Enter h: ");
   scanf("%f",&h);
   r2= pow(r,2);
   cr = pi * r2;
   printf("\nCircle area = %.2f\n",cr);
   r3 =pow(r,3);
   sv = 4.0/3.0 * pi *r3;
   printf("\nSphere volume = %.2f\n",sv);
   cv = pi * r2 *h;
   printf("\nCylinder volume = %.2f",cv);
   return 0;
}