#include <stdio.h>
#include <stdlib.h>
int main()
{
   int width,length,members;
   float sqm;
   printf("Baan Sai Thong\n");
   printf("\nEnter land width: ");
   scanf("%d",&width);
   printf("Enter land length: ");
   scanf("%d",&length);
   printf("Enter number of family members: ");
   scanf("%d",&members);

   if(width<=0 || length<=0 ||members<=0){
       printf("\nError inputs");
   }
   else {
       sqm= (width*length)/members;
       if(sqm<50){
           printf("\nEach member will receive a %.4f sq.m of land\n",sqm);
           printf("Not optimal for family members.");
       }
       else{
           printf("Each membeer will receive a %.4f sq.m of land",sqm);
       }
   }
   return 0;
}