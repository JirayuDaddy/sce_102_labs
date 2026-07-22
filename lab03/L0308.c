#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float r, area;
    int big;

    printf("Enter r: ");
    scanf("%f", &r);

    area = 3.1416 * pow(r, 2);
    printf("\nCircle area = %.2f\n", area);

    big = (area >= 100);
    printf("Big circle %d", big);

    return 0;
}