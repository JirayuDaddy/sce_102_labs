#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cen;
    printf("Enter length in centimeter: ");
    scanf("%f", &cen);
    float milli = cen*10;
    float meter = cen/100;
    float inch = cen/2.54;
    printf("%.2f centimeter = %.2f millimeters, %.2f meters, and %.2f inches", cen, milli, meter, inch);
    return 0;
}