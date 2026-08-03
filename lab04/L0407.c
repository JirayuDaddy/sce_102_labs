#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, ans, chosen;
    char answer;
    printf("Equation :: ans = 15 / 2 + 3 - (14 * n)\n");
    printf("Enter n: ");
    scanf("%d", &n);
    ans = 15 / 2 + 3 - (14 * n);
    printf("Choices:\n");
    printf("a) -400\nb) -410\nc) -420\nd) -4100\n\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'a':chosen = -400;
        break;
    case 'b':chosen = -410;
        break;
    case 'c':chosen = -420;
        break;
    case 'd':chosen = -4100;
        break;
    default:chosen = 0;
        break;
    }
    if (chosen == ans)
        printf("Correct answer!\n");
    else
        printf("Wrong answer\n");
    return 0;
}
