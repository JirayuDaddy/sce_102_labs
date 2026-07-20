#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1416
int main() {
    float r, h;

    printf("Enter R :");
    scanf("%f", &r);
    printf("Enter H :");
    scanf("%f", &h);

    printf("Circle area = %.2f\n", pi * r * r);
    printf("Sphare volume =%.2f\n", pi * r * r * r * 4 / 3);
    printf("Cylinder volume = %.2f\n", pi * r *r * h);
    return 0;
}