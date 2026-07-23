#include <stdio.h>
#include <stdlib.h>
int main()
{
   int s1,s2,s3,s4,s5;
   float score;
   printf("Enter s1 score: ");
   scanf("%d",&s1);
   printf("Enter s2 score: ");
   scanf("%d",&s2);
   printf("Enter s3 score: ");
   scanf("%d",&s3);
   printf("Enter s4 score: ");
   scanf("%d",&s4);
   printf("Enter s5 score: ");
   scanf("%d",&s5);
   score = (s1+s2+s3+s4+s5)/5.0;
   printf("\nAverage score %.2f\n",score);
   if (score>=80){
       printf("Average grade is A");
   }
   else {
       if(score>=70 && score<=79){
           printf("Average grade is B");
       }
       else{
           if(score>=60 && score<=69){
               printf("Average grade is C");
           }
           else {
               if(score<60){
                   printf("Average grade is F");
               }
           }
       }
   }
   return 0;
}