#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int r,x;
    float area;
    printf("Enter r: ");
    scanf("%d", &r);
    area = 3.1416 * pow(r,2);
    printf("\nCircle area = %.2f\n", area);
    x = (area>=100);
    printf("Big circle = %d\n", x);
    return 0;
}