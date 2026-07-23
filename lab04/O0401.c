#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s1, s2, s3, s4, s5, score;
    printf("Enter s1 score: ");
    scanf("%f", &s1);
    printf("Enter s2 score: ");
    scanf("%f", &s2);
    printf("Enter s3 score: ");
    scanf("%f", &s3);
    printf("Enter s4 score: ");
    scanf("%f", &s4);
    printf("Enter s5 score: ");
    scanf("%f", &s5);

    score = (s1 + s2 + s3 + s4 + s5) / 5;
    printf("\nAverage score %.2f", score);
    printf("\nAverage grade is ");
    if (score >= 80)
    {
        printf("A");
    }
    else if (score >= 70 && score < 80)
    {
        printf("B");
    }
    else if (score >= 60 && score < 70)
    {
        printf("C");
    }
    else
    {
        printf("F");
    }
    return 0;
}