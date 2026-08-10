#include <stdio.h>

int main() {
    int number;
    int start_number;
    int number_sum = 0;

    printf("Enter the highest number for factorial: ");
    scanf("%d", &number);

    printf("Factorial results\n");

    for (start_number = 1; start_number <= number; start_number++) {
        int fact = 1;

        printf("%d! = ", start_number);
        for (int i = start_number; i >= 1; i--) {
            fact *= i;
            printf("%d", i);
            if (i > 1) printf(" * ");
        }
        printf(" = %d\n", fact);
    }

    printf("\nSummation of factorial results\n");
    for (start_number = 1; start_number <= number; start_number++) {
        int fact = 1;
        for (int i = start_number; i >= 1; i--) {
            fact *= i;
        }

        printf("%d", fact);
        number_sum += fact;

        if (start_number < number) printf(" + ");
    }
    printf(" = %d\n", number_sum);

    return 0;
}