#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, x3, x4;
    float xrms;

    printf("Enter x1: ");
    scanf("%f", &x1);

    printf("Enter x2: ");
    scanf("%f", &x2);

    printf("Enter x3: ");
    scanf("%f", &x3);

    printf("Enter x4: ");
    scanf("%f", &x4);

    xrms = sqrt((x1*x1 + x2*x2 + x3*x3 + x4*x4) / 4.0);

    printf("\nxrms = %.3f\n", xrms);

    return 0;
}