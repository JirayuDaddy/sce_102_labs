#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n;
   float width,length,area,change;
   width=0;
   length=0;
   n=0;
   while(width<=0){
   printf("Enter width: ");
   scanf("%f",&width);
   if(width<=0){
       printf("\nError input\n\n");
       }
   }
   while(length<=0){
       printf("Enter length: ");
       scanf("%f",&length);
       if(length<=0){
           printf("\nError input\n\n");
       }
   }
   while(n<=0){
       printf("Enter number of area (n): ");
       scanf("%d",&n);
       if(n<=0){
           printf("\nError input\n\n");
       }
   }
   if(width>length){
       change=width;
       width=length;
       length=change;
   }
   area = (width*length)/n;
   printf("\nWidth :: %.2f\n",width);
   printf("Length :: %.2f\n",length);
   printf("Area for each n :: %.2f",area);
   return 0;
}
