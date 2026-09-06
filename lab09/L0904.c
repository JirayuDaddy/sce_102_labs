#include <stdio.h>
int main()
{
   int num[12] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
   int *ptr;
   ptr = num;
   printf("original ::: ");
   for(int i = 0; i < 12; i++)
   {
       printf("%d ", *(ptr + i));
   }
   printf("\nmultiplied ::: ");
   for(int i = 0; i < 12; i++)
   {
       printf("%d ", *(ptr + i) * 24);
   }
   return 0;
}