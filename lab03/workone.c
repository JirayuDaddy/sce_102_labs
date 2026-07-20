#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {

int n1, n2;
float f1, f2;
float r1, r2;


    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);
    printf("Enter f1: ");
    scanf("%f", &f1);
    printf("Enter f2: ");
    scanf("%f", &f2);

    printf("result\n");
    r1 = n1 + n2;
    printf("%d + %d = %.2f\n", n1, n2, n1+n2);
    
    printf("%d - %d = %.2f\n", n1, n2, n1-n2);
    r1 = n1 - n2;
    printf("%d * %d = %.2f\n", n1, n2, n1*n2);
    r1 = n1 * n2;
    printf("%d / %d = %.2f\n", n1, n2, n1/n2);
    r1 = n1 / n2;
    printf("%d %% %d = %.2f\n", n1, n2, n1%n2);
    r1 = n1 % n2;

    printf("%.2f + %.2f = %.2f\n", f1, f2, f1+f2);
    r2 = f1 + f2;
    printf("%.2f - %.2f = %.2f\n", f1, f2, f1-f2);
    r2 = f1 - f2;
    printf("%.2f * %.2f = %.2f\n", f1, f2, f1*f2);
    r2 = f1 * f2;
    printf("%.2f / %.2f = %.2f\n", f1, f2, f1/f2);
    r2 = f1 / f2;
    return 0;


}