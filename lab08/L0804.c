#include <stdio.h>
float averageHeight(float height[], int student);
float averageHeight(float height[], int student)
{
   float sum = 0;
   for(int i = 0; i < student; i++)
   {
       sum = sum + height[i];
   }
   return sum / student;
}
int main()
{
   float height[30];
   float average;
   int student = 0;
   for(int i = 0; i < 30; i++)
   {
       printf("Enter height for student #%d: ", i + 1);
       scanf("%f", &height[i]);
       if(height[i] <= 0)
       {
           break;
       }
       student++;
   }
   if(student > 0)
   {
       average = averageHeight(height, student);
       printf("\nAverage height is %.2f\n", average);
       printf("Number of students is %d\n", student);
   }
   return 0;
}