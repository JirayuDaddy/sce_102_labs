#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s1, s2, s3, s4, s5;
    float score;
    printf("Enter s1: ");
    scanf("%d", &s1);
    printf("Enter s2: ");
    scanf("%d", &s2);
    printf("Enter s3: ");
    scanf("%d", &s3);
    printf("Enter s4: ");
    scanf("%d", &s4);
    printf("Enter s5: ");
    scanf("%d", &s5);
    score = (s1 + s2 + s3 + s4 + s5) / 5.0;
    printf("Average score: %.2f\n", score);
    if (score >= 90)
    {
        printf("Your grade is A\n");
    }
    else if (score >= 80)
    {
        printf("Your grade is B\n");
    }
    else if (score >= 70)
    {
        printf("Your grade is C\n");
    }
    else if (score >= 60)
    {
        printf("Your grade is D\n");
    }
    else
    {
        printf("Your grade is F\n");
    }
    return 0;
}
