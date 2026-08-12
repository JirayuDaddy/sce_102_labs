#include <stdio.h>

int main() {

    int n1, n2;
    float f1;
    float r1;

    printf("Enter n1: ");
    scanf("%d", &n1);

    printf("Enter n2: ");
    scanf("%d", &n2);

    printf("Enter f1: ");
    scanf("%f", &f1);

    printf("\nResult\n");

    
    r1 = n1 / n2;
    printf("%d / %d = %.2f\n", n1, n2, r1);

    r1 = n1 / f1;
    printf("%d / %.2f = %.2f\n", n1, f1, r1);

    return 0;
}