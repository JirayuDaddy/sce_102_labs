#include <stdio.h>
#include <stdlib.h>
int main()
{
   int student = 1;
   int n = 1;
   int total = 0;
   int high, low;
   int highStudent, lowStudent;
   float average;
   printf("Student score calculator\n");
   while(student > 0){
       printf("Enter score for student %d: ", n);
       scanf("%d", &student);
       if(student > 0){
           total = total + student;

           if(n == 1){
               high = student;
               low = student;
               highStudent = n;
               lowStudent = n;
           }

           if(student > high){
               high = student;
               highStudent = n;
           }

           if(student < low){
               low = student;
               lowStudent = n;
           }
           n++;
       }
   }
   average = (float)total / (n - 1);
   printf("\nAverage score :: %.2f\n", average);
   printf("Highest score :: %d by student %d\n", high, highStudent);
   printf("Lowest score  :: %d by student %d\n", low, lowStudent);
   return 0;
}