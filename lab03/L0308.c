#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main() {
    float r;
    const float pi = 3.1416;

    printf("Enter r: ");
    scanf("%f", &r);

    float circle_area = pi * pow(r, 2);
    bool more_or_equal_than_100 = (circle_area >= 100);

    printf("\nCircle area = %.2f", circle_area);
    printf("\nBig Circle %d", more_or_equal_than_100);

    return 0;
}
