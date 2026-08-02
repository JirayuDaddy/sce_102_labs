#include <stdio.h>
#include <math.h>

int main(){
    float s1,s2,s3,s4,s5;
    float average;
    printf("Enter s1 score: ");
    scanf("%f",&s1);
    printf("Enter s2 score: ");
    scanf("%f",&s2);
    printf("Enter s3 score: ");
    scanf("%f",&s3);
    printf("Enter s4 score: ");
    scanf("%f",&s4);
    printf("Enter s5 score: ");
    scanf("%f",&s5);
    average = (s1+s2+s3+s4+s5)/5;
    printf("\nAverage score %.2f\n",average);
    if(average >= 80){
        printf("Average grade is A");
    }
    else if(average >= 70){
        printf("Average grade is B");
    }
    else if(average >= 60){
        printf("Average grade is C");
    }
    else{
        printf("Average grade is F");
    }
    return 0;
}