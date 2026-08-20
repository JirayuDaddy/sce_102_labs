#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num=0;
   do {
       printf("Enter number: ");
       scanf("%d",&num);
   }while(num>=-1);
   printf("\nData receiving ended");
   return 0;
}