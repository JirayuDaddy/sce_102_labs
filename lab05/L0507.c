#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fac_h, i, j;
    long long fact, sum = 0;

    printf("Enter a Highest number for factorial: ");
    scanf("%d", &fac_h);

    printf("Factorial Result\n");
    for (i = 1; i <= fac_h; i++)
    {
        fact = 1;
        printf("%d! = ", i);
        for (j = 1; j <= i; j++)
        {
            fact *= j;
            printf("%d", j);
            if (j < i)
                printf(" * ");
        }
        printf(" = %lld\n", fact);
        sum += fact;
    }

    printf("Summation of Factorials result\n");
    fact = 1;
    for (i = 1; i <= fac_h; i++)
    {
        fact *= i;
        printf("%lld", fact);
        if (i < fac_h)
            printf(" + ");
    }
    printf(" = %lld\n", sum);

    return 0;
}
