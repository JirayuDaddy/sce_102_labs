#include <stdio.h>

int main() {
    int n;
    int factorial = 1;
    int sum = 0;

    printf("Enter the highest number for factorial: ");
    scanf("%d", &n);

    printf("Factorial results\n");

    for (int i = 1; i <= n; i++) {
        factorial *= i;

        printf("%d! = ", i);

        for (int j = i; j >= 1; j--) {
            printf("%d", j);

            if (j > 1) {
                printf(" * ");
            }
        }

        printf(" = %d\n", factorial);

        sum += factorial;
    }

    printf("\nSummation of factorial results\n");

    for (int i = 1; i <= n; i++) {
        int result = 1;

        for (int j = 1; j <= i; j++) {
            result *= j;
        }

        printf("%d", result);

        if (i < n) {
            printf(" + ");
        }
    }

    printf(" = %d\n", sum);

    return 0;
}