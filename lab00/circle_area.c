#include <stdio.h>

int main(void) {
    double r;
    const double pi = 3.1416;

    printf("Enter r: ");
    scanf("%lf", &r);

    double area = pi * r * r;
    printf("Circle area = %.2f\n", area);

    /* Print 1 when area>100, else 0 — no if-else used */
    printf("Big circle %d\n", (area > 100.0));

    return 0;
}
