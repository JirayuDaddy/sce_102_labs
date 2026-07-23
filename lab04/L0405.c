#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num;
   printf("Available parts list\n");
   printf("48. Radiator 240\n");
   printf("61. X43 Alternator\n");
   printf("99. B33 Battery\n");
   printf("\nSelect the part to inspect: ");
   scanf("%d",&num);
   switch(num){
       case 48:
       printf("Radiator 240 selected");
       break;
       case 61:
       printf("X43 Alternator selected");
       break;
       case 99:
       printf("B33 Battery selected");
       break;
       default:
       printf("Error in part selection");
   }
   return 0;
}
