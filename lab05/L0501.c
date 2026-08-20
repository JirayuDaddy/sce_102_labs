#include <stdio.h>
#include <stdlib.h>
int main()
{
   int t = 0;
   float num;
   printf("Starting the engine\n");
   printf("Enter the acceleration value (m/s^2): ");
   scanf("%f",&num);
   while(t<20){
       printf("Current speed at t=%d is %.3f m/s\n",t+1,num*t);
       if(num*t>=20)
       {
           break;
       }
       t++;
   }
   return 0;
}