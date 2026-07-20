#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n,x,y,z;
   printf("Enter n: ");
   scanf("%d",&n);
   x = 3+4*n/2-18;
   printf("\nResult x = %d\n",x);
   y = (3+4)*n/(18*2);
   printf("Result y = %d\n",y);
   z = 15/2+3-(14*n);
   printf("Result z = %d",z);
   return 0;
}