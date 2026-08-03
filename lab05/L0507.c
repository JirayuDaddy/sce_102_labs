#include <stdio.h>

int main() {
    int n;
    int total_sum = 0;

    printf("Enter the highest number for factorial: ");
    scanf("%d", &n);

    printf("Factorial results\n");
    for (int i = 1; i <= n; i++) {
        int fact = 1;
     
        printf("%d! = ", i);
        
        for (int j = i; j >= 1; j--) {
            fact *= j;
            printf("%d", j);
            if (j > 1) {
                printf(" * ");
            }
        }
        printf(" = %d\n", fact);
        total_sum += fact; 
    }

    printf("\nSummation of factorial results\n");
    for (int i = 1; i <= n; i++) {
        int fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        printf("%d", fact);
        if (i < n) {
            printf(" + ");
        }
    }
    printf(" = %d\n", total_sum);

    return 0;
}
