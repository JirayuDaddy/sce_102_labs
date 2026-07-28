#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int s1,s2,s3,s4,s5;
    float score;
    printf("Enter s1 score:");
    scanf("%d",&s1);
    printf("Enter s2 score:");
    scanf("%d",&s2);
    printf("Enter s3 score:");
    scanf("%d",&s3);
    printf("Enter s4 score:");
    scanf("%d",&s4);
    printf("Enter s5 score:");
    scanf("%d",&s5);
    score = (float)(s1+s2+s3+s4+s5)/5;
    if(score <60){
        printf("Average score %.2f",score);
        printf("\naverage grade is F");
    }
    else if(score <70){
         printf("Average score %.2f",score);
         printf("\nAverage grade is C");
    }
    else if(score <80){
         printf("Average score %.2f",score);
         printf("\nAverage grade is B");
    }
    else{
         printf("Average score %.2f",score);
         printf("\nAverage grade is A");
    }
return 0;
}