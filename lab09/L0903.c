#include <stdio.h>
float speedDistance(float speed, int *time);
float speedDistance(float speed, int *time)
{
   float distance;
   distance = speed * (*time);
   *time = *time + 3;
   return distance;
}
int main()
{
   float speed, distance;
   int time = 1;
   printf("Distance calculator\n");
   printf("-------------------\n");
   for(int i = 1; i <= 3; i++)
   {
       printf("Enter speed: ");
       scanf("%f", &speed);
       distance = speedDistance(speed, &time);
       printf("step %d => distance %.2f, time %d\n",
              i, distance, time);
   }
   return 0;
}


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