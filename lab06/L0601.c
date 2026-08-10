#include <stdio.h>
#include <math.h>

int main(void) {
    float y;

    printf("Enter the number for y: ");
    scanf("%f", &y);

    double x1 = sqrt(pow(y, 2) + 45);
    double x2 = pow(y, 2) + 3 * y + 1;

    printf("Results\n");
    printf("x from eq.1 = %.2f\n", x1);
    printf("x from eq.2 = %.2f\n", x2);

    return 0;
}
