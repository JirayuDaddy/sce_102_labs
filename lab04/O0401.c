#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int s1,s2,s3,s4,s5;
    float avg_score;
    char A,B,C,F;
    
    printf("Enter s1 score: ");
    scanf("%d", &s1);

    printf("Enter s2 score: ");
    scanf("%d", &s2);

    printf("Enter s3 score: ");
    scanf("%d", &s3);

    printf("Enter s4 score: ");
    scanf("%d", &s4);

    printf("Enter s5 score: ");
    scanf("%d", &s5);

    avg_score = (float)(s1 + s2 + s3 + s4 + s5) / 5;
    if(avg_score >= 80){
        printf("\nAverage score %.2f", avg_score);
        printf("\nAverage grade is A");
    }
    else if(avg_score >= 70){
        printf("\nAverage score %.2f", avg_score);
        printf("\nAverage grade is B");
    }
    else if(avg_score >= 60){
        printf("\nverage score %.2f", avg_score);
        printf("\nAverage grade is C");
    }
    else{
        printf("\nAverage score %.2f", avg_score);
        printf("\nAverage grade is F");
    }

    return 0;
}
