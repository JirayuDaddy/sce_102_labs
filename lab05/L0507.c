#include <stdio.h>

int main() {
    int max_num;
    double total_sum = 0;
    double facts[21];
    printf("Enter the highest number for factorial (1-20): ");
    if (scanf("%d", &max_num) != 1 || max_num < 1 || max_num > 20) {
        printf("Error: Please enter a number between 1 and 20.\n");
        return 1;
    }
    printf("\nFactorial results\n");
    for (int n = 1; n <= max_num; n++) {
        double factorial = 1;
        printf("%d! = ", n);
        for (int i = n; i >= 1; i--) {
            factorial *= i;
            printf("%d%s", i, (i > 1) ? " * " : "");
        }
        facts[n] = factorial;
        total_sum += factorial;
        printf(" = %.0f\n", factorial);
    }
    printf("\nSummation of factorial results\n");
    for (int n = 1; n <= max_num; n++) {
        printf("%.0f%s", facts[n], (n < max_num) ? " + " : "");
    }
    printf(" = %.0f\n", total_sum);

    return 0;
}