#include <stdio.h>
#include <stdlib.h> 

int main() {
    int max_num, i, j;
    int sum = 0;

    printf("Enter the highest number for factorial: ");
    scanf("%d", &max_num);

    printf("Factorial results\n");

    for (i = 1; i <= max_num; i++) {
        int fact = 1;
        printf("%d! = ", i);
        for (j = i; j >= 1; j--) {
            fact = fact * j;

            if (j > 1) {
                printf("%d * ", j);
            } 
            else {
                printf("%d = ", j);
            }
        }
        printf("%d\n", fact);
        sum = sum + fact;
    }
    printf("\nSummation of factorial results\n");

    for (i = 1; i <= max_num; i++) {
        int fact = 1;
        for (j = i; j >= 1; j--) {
            fact = fact * j;
        }
        if (i < max_num) {
            printf("%d + ", fact);
        } 
        else {
            printf("%d = ", fact);
        }
    }
    printf("%d\n", sum);

    return 0;
}