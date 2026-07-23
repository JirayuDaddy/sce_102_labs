#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num;
   printf("Enter number x: ");
   scanf("%d",&num);
   if(num<0){
       printf("\nMinus Number\n");
   }
   else{
       if(num==0){
           printf("It's Zero");
       }
       else{
           printf("\nPlus Number\n");
           if (num>=1000){
               printf("Very Large Number");
           }
           else{
               if(num>=100){
               printf("Large Number");
               }
               else {
                   printf("Nominal Number");
               }
           }
       }
   }
   return 0;
}
