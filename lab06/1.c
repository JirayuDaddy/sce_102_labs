#include <stdio.h>
#include <math.h>

int main() {
    double y;
    double x1, x2;

    printf("Enter the number for y: ");
    scanf("%lf", &y);

    x1 = sqrt(pow(y, 2) + 45);
    x2 = pow(y, 2) + 3 * y + 1;

    printf("\nResults\n");
    printf("x from eq.1 = %.2f\n", x1);
    printf("x from eq.2 = %.2f\n", x2);

    return 0;
}