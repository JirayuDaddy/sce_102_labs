#include<stdio.h>
#include<stdlib.h>

int main()
{
    float MILLI_RATE = 10;
    float METER_RATE = 100;
    float INCH_RATE = 2.54;
    float centimeter,millimeter,meter,inch;
    
    printf("Enter length in centimeter: ");
    scanf("%f",&centimeter);
    millimeter = centimeter * MILLI_RATE;
    meter = centimeter / METER_RATE;
    inch = centimeter / INCH_RATE;
    printf("%.2f centimeters, = %.2f millimeters, %.2f meters, and %.2f inches",centimeter,millimeter,meter,inch);

return 0;
}