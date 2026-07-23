#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char answer;
    printf("Equation :: ans = 15 / 2 + 3 - (14 * n)");
    printf("\nEnter n: ");
    scanf("%d", &num);
    printf("a) -400");
    printf("\nb) -410");
    printf("\nc) -420");
    printf("\nd) -4100");

    printf("\n\nEnter your answer: ");
    scanf(" %c", &answer);
    if (answer == 'b')
    {
        printf("Correct answer!");
    }
    else
    {
        printf("Wrong answer");
    }
    return 0;
}