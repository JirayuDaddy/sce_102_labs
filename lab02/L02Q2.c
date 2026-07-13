#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float MILLI_RATE = 10;
    const float METER_RATE = 100;
    const float INCH_RATE = 2.54;

    float cm, mm, m, inch;

    printf("Enter length in centimeter: ");
    scanf("%f", &cm);

    mm = cm * MILLI_RATE;
    m = cm / METER_RATE;
    inch = cm / INCH_RATE;

    printf("%.2f centimeters = %.2f millimeters, %.2f meters, and %.2f inches\n", cm, mm, m, inch);

    return 0;
}