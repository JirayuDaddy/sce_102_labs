#include <stdio.h>
#include <stdlib.h>

int main()
{
   float Centimeter;
   printf("Centimeter:");
   scanf("%f",&Centimeter);
   printf("%.2f Centimeter = %.2f Millimeter\n",Centimeter,Centimeter*10);
   printf("%.2f Centimeter = %.2f Meter\n",Centimeter,Centimeter/100);
   printf("%.2f Centimeter = %.2f Inch\n",Centimeter,Centimeter/2.54);

}