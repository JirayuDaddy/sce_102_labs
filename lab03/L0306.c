#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float r, h, area, circle, cylinder;

    printf("Enter r: ");
    scanf("%f", &r);
    printf("Enter h: ");
    scanf("%f", &h);

    area = 3.1416 * pow(r,2) ;
    printf("\nCircle area = %.2f", area);
    circle = 4 / 3 * 3.1416 * pow(r,3) ;
    printf("\n\nSphere volume = %.2f", circle);
    cylinder = 3.1416 * pow(r,2) * h ;
    printf("\n\nCylinder volume = %.2f", cylinder);

}