#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int s1, s2, s3, s4, s5;
    double average;
    char grade;
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
    average = (s1 + s2 + s3 + s4 + s5) / 5.0;
    if (average >= 80.0)
    {grade = 'A';}
    else if (average >= 70.0)
    {grade = 'B';}
    else if (average >= 60.0)
    {grade = 'C';}
    else
    {grade = 'F';}
    printf("\nAverage score %.2f\n", average);
    printf("Average grade is %c\n", grade);
    return 0;
}
