#include <stdio.h>
int main()
{
   int x[7] = {1,4,7,11,16};
   float y[4] = {13.2,1.4,3.8,2.75};
   char z[7] = {69,114,105,99,115,111,110};
   printf("%d %.2f %c ",x[2],y[0],z[3]);
   return 0;
}