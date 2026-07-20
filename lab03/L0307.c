#include <stdio.h>
#include <math.h>

int main(void) {
    float x1, x2, x3, x4;
    float xrms;
    int n = 4;

    printf("Enter x1: ");
    scanf("%f", &x1);
    printf("Enter x2: ");
    scanf("%f", &x2);
    printf("Enter x3: ");
    scanf("%f", &x3);
    printf("Enter x4: ");
    scanf("%f", &x4);

    xrms = sqrt((pow(x1, 2) + pow(x2, 2) + pow(x3, 2) + pow(x4, 2)) / n);

    printf("\nxrms = %.5f\n", xrms);

    return 0;
}
