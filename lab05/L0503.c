#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num;
   printf("List of odd number :: ");
   for(num=1;num<=100;++num){
       if(num%2!=0)
       printf("%d ",num);
   }

   printf("\n\nList of even number :: ");
   for(num=1;num<=100;++num){
       if(num%2==0)
       printf("%d ",num);
   }
   return 0;
}