#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    float r;
    int h;

    printf("Enter r: ");
    scanf("%f", &r);

    printf("Enter h: ");
    scanf("%d", &h);

    printf("\nCircle area = %.2f\n", 3.1416 * r * r );
    printf("\nSphere volume = %.2f\n", 1.334 * 3.1416 * r * r * r );
    printf("\nCylinder volume = %.2f", 3.1416 * r * r * h );

    return 0;
}