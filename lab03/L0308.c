#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float r, area;
    int bigcircle;

    printf("Enter r: ");
    scanf("%f", &r);

    area = 3.1416 * pow(r,2) ;
    bigcircle = (area >= 100) ;
    printf("\nCircle area = %.2f", area);
    printf("\nBig circle %d", bigcircle);

    return 0;
}