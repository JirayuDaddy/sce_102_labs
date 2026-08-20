#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num;
   int fac=1;
   int sum=0;
   printf("Enter the highest number for factorial: ");
   scanf("%d",&num);
   printf("Factorial results\n");
   for(int i=1;i<=num;i++){
       fac=1;
       printf("%d! = ",i);
   for(int j=i;j>=1;j--){
       fac = fac*j;
       printf("%d",j);
       if(j>1){
       printf(" * ");
       }
   }
   printf(" = %d\n",fac);
   sum = sum+fac;

   }
   fac = 1;
   for(int i = 1; i <= num; i++){
       fac = fac * i;
       printf("%d", fac);
       if(i < num){
       printf(" + ");
       }
   }
   printf(" = %d\n", sum);
   return 0;
}