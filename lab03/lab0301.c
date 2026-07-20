#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N1;
    int N2;
    float F1;
    float F2;
    printf("Enter n1:  ");
    scanf("%d", &N1);
    printf("Enter n2:  ");
    scanf("%d", &N2);
    printf("Enter f1:  ");
    scanf("%f", &F1);
    printf("Enter f2:  ");
    scanf("%f", &F2);
    printf("\nResults\n");
    printf("%d + %d = %d\n", N1, N2, N1 + N2);
    printf("%d - %d = %d\n", N1, N2, N1 - N2);
    printf("%d * %d = %d\n", N1, N2, N1 * N2);
    printf("%d / %d = %d\n", N1, N2, N1 / N2);
    printf("\n%.2f + %.2f = %.2f\n", F1, F2, F1 + F2);
    printf("%.2f - %.2f = %.2f\n", F1, F2, F1 - F2);
    printf("%.2f * %.2f = %.2f\n", F1, F2, F1 * F2);
    printf("%.2f / %.2f = %.2f\n", F1, F2, F1 / F2);
    return 0;

}