#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1 = 0, n2 = 0, f1 = 0, f2 = 0;
    printf("Enter a n1: ");
    scanf("%d", &n1);
    printf("Enter a n2: ");
    scanf("%d", &n2);
    printf("Enter a f1: ");
    scanf("%d", &f1);
    printf("Enter a f2: ");
    scanf("%d", &f2);

    printf("Result\n");
    printf("n1 + n2 = %d\n", n1 + n2);
    printf("n1 - n2 = %d\n", n1 - n2);
    printf("n1 * n2 = %d\n", n1 * n2);
    printf("n1 / n2 = %d\n", n1 / n2);
    printf("n1 %% n2 = %d\n", n1 % n2);

    printf("f1 + f2 = %d\n", f1 + f2);
    printf("f1 - f2 = %d\n", f1 - f2);
    printf("f1 * f2 = %d\n", f1 * f2);
    printf("f1 / f2 = %d\n", f1 / f2);

    return 0;
}