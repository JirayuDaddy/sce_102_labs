#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cen;
    printf("Enter length in centimeter: ");
    scanf("%f", &cen);
    printf("\n%.2f centimeters = %.2f millimeters, %.2f meters, and %.2f inches", cen, cen * 10, cen / 100, cen / 2.54);
    return 0;
}