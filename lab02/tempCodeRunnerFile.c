#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 int respond;
 float r,r2,cr,pi=3.1416;

 printf("Enter r: ");
 scanf("%f",&r);

 r2 = pow(r,2);
 cr = pi*r2;
 printf("\nCircle area = %.2f\n",cr);
 respond = (cr>=100);
 printf("Big circle %d",respond);


    return 0;


}