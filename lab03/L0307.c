#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int x1,x2,x3,x4;
   float xn,xrms;
   printf("Enter x1: ");
   scanf("%d",&x1);
   printf("Enter x2: ");
   scanf("%d",&x2);
   printf("Enter x3: ");
   scanf("%d",&x3);
   printf("Enter x4: ");
   scanf("%d",&x4);
   xn = (pow(x1,2)+pow(x2,2)+pow(x3,2)+pow(x4,2))/4;
   xrms = sqrt(xn);
   printf("\nxrms = %.3f\n",xrms);
   return 0;
}