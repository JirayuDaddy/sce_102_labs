#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Enter x1: ");
    float x1;
    scanf("%f", &x1);

    printf("Enter x2: ");
    float x2;
    scanf("%f", &x2);

    printf("Enter x3: ");
    float x3;
    scanf("%f", &x3);

    printf("Enter x4: ");
    float x4;
    scanf("%f", &x4);

    float xrms = sqrt(((x1 * x1) + (x2 * x2) + (x3 * x3) + (x4 * x4)) / 4);
    printf("RMS value: %.3f\n", xrms);
    return 0;
}