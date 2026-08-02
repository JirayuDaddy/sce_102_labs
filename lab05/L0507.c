#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, factorial, i, j;
    int sum = 0;

    printf("Enter the highest number for factorial: ");
    scanf("%d", &num);
    printf("Factorial  results\n");
    for (i = 1; i <= num; i++)
    {
        factorial = 1;
        printf("%d! = %d", i, i);
        for (j = i; j > 0; j--)
        {
            printf(" * %d", j);
            factorial = factorial * j;
        }
        printf(" = %d\n", factorial);
        sum = sum + factorial;
    }
    printf("\nSummation of factorial results\n");
    sum = 0;
    for (i = 1; i <= num; i++)
    {
        factorial = 1;
        for (j = i; j > 0; j--)
        {
            factorial = factorial * j;
        }
        printf("%d", factorial);
        if (i != num)
        {
            printf(" + ");
        }
        sum = sum + factorial;
    }
    printf(" = %d\n", sum);
    return 0;
}