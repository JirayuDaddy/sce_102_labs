#include <stdio.h>
#include <stdlib.h>
int main(){
    float s1=0,s2=0,s3=0,s4=0,s5=0,avg=0;
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
    avg=(s1+s2+s3+s4+s5)/5;
    printf("\nAverage score %.2f",avg);
    if(avg>=80){
        printf("\nAverage grade is A");}
    else if(avg>=70){
        printf("\nAverage grade is B");}
    else if(avg>=60){
        printf("\nAverage grade is C");}
    else{
        printf("\nAverage grade is F");}
    return 0;
}