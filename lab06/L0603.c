#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float circleArea(int r);
float cylinVol(int r,int h);
float circleArea(int r)
{
   float Area;
   Area= 3.1416*r*r;
   return Area;
}
float cylinVol(int r,int h)
{
   float Vol;
   Vol= circleArea(r)*h;
   return Vol;
}
int main()
{
   int r,h;
   float Area, Vol;
   printf("Circle and Cylinder Volume Calculator\n\n");
   printf("Circle\n");
   printf("Enter radius r: ");
   scanf("%d",&r);
   Area= circleArea(r);
   printf("Circle area %.2f\n\n",Area);
   printf("Cylinder\n");
   printf("Enter height h: ");
   scanf("%d",&h);
   Vol= cylinVol(r,h);
   printf("Cylinder volume %.2f",Vol);

   return 0;
}