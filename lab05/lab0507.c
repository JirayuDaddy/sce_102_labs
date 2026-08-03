#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j;
    long long fact, sum = 0;
    printf("Enter the highest number for factorial: ");
    scanf("%d", &n);
    printf("Factorial results\n");
    for (i = 1; i <= n; i++)
    {
        fact = 1;
        printf("%d! = ", i);
        for (j = i; j >= 1; j--)
        {
            fact *= j;
            printf("%d", j);
            if (j > 1)
                printf(" * ");
        }
        printf(" = %lld\n", fact);
        sum += fact;
    }
    printf("\nSummation of factorial results\n");
    for (i = 1; i <= n; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
            fact *= j;
        printf("%lld", fact);
        if (i < n)
            printf(" + ");
    }
    printf(" = %lld\n", sum);
    return 0;
}