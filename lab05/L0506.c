#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num;
   int fac=1;
   printf("Enter the number for factorial: ");
   scanf("%d",&num);
   for(int i=num;i>=1;i--){
       fac = fac*i;
       printf("%d",i);
       if(i>1){
           printf(" * ");
       }
   }
   printf(" = %d",fac);
   return 0;
}
