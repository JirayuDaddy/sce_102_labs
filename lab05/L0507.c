#include <stdio.h>

int main(void) {
    int n;

    printf("Enter the highest number for factorial: ");
    scanf("%d", &n);

    printf("Factorial results\n");
    for (int k = 1; k <= n; k++) {
        long long factorial = 1;
        printf("%d! = ", k);
        for (int i = k; i >= 1; i--) {
            factorial *= i;
            if (i > 1) {
                printf("%d * ", i);
            } else {
                printf("%d = %lld\n", i, factorial);
            }
        }
    }

    printf("Summation of factorial results\n");
    long long runningSum = 0;
    for (int k = 1; k <= n; k++) {
        long long factorial = 1;
        for (int i = 1; i <= k; i++) {
            factorial *= i;
        }
        runningSum += factorial;
        if (k < n) {
            printf("%lld + ", factorial);
        } else {
            printf("%lld = %lld\n", factorial, runningSum);
        }
    }

    return 0;
}
