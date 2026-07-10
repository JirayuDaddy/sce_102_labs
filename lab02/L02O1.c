#include<stdio.h>
#include<stdlib.h>

int main()
{
    int age;
    float heigth;
    char grade;
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter heigth: ");
    scanf("%f",&heigth);
    printf("Enter grade: ");
    scanf(" %c",&grade);
    printf("\nAge    : %d\n",age);
    printf("Heigth : %.2f\n",heigth);
    printf("Grade  : %c\n",grade);
return 0;
}