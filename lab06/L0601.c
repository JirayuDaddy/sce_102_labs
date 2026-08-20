#include <stdio.h>
#include <math.h>
int main()
{
   int y;
   float eq1,eq2;
   printf("Enter the number for y: ");
   scanf("%d",&y);
   printf("\nResults\n");
   eq1= sqrt((y*y)+45);
   eq2= (y*y)+3*y+1;
   printf("x from eq.1 = %.2f\n",eq1);
   printf("x from eq.2 = %.2f\n",eq2);

   return 0;
}
