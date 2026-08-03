#include <stdio.h>

int main() {
    int n;
    long long fact, sum = 0;

    printf("Enter the highest number for factorial: ");
    scanf("%d", &n);

    printf("Factorial results\n");

    for (int i = 1; i <= n; i++) {
        fact = 1;

        printf("%d! = ", i);

        for (int j = i; j >= 1; j--) {
            printf("%d", j);
            fact *= j;

            if (j != 1)
                printf(" * ");
        }

        printf(" = %lld\n", fact);
        sum += fact;
    }

    printf("\nSummation of factorial results\n");

    for (int i = 1; i <= n; i++) {
        fact = 1;

        for (int j = 1; j <= i; j++) {
            fact *= j;
        }

        printf("%lld", fact);

        if (i != n)
            printf(" + ");
        else
            printf(" = ");
    }

    printf("%lld\n", sum);

    return 0;
}