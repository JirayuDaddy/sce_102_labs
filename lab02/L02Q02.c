#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cen,mil,meter,inch;
    printf("Enter length in centimeter: ");
    scanf("%f", &cen);
    mil = cen*10;
    meter = cen/100;
    inch = cen/2.54;
    printf("%.2f centimeters = %.2f millimeters, %.2f meters, %.2f inches", cen, mil, meter, inch);
    return 0;
}