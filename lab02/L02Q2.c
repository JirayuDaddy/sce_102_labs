#include <stdio.h>
#include <stdlib.h>
#define MILLI_RATE 10
#define METER_RATE 100
#define INCH_RATE 2.54

int main() {
    double centimeter;
    double millimeter, meter, inch;

    printf("Enter length in centimeter: ");
    scanf("%lf", &centimeter);

    millimeter = centimeter * MILLI_RATE;
    meter = centimeter / METER_RATE;
    inch = centimeter / INCH_RATE;

    printf("\n%.2f centimeters = %.2f millimeters, %.2f meters, and %.2f inches\n",
           centimeter, millimeter, meter, inch);

    return 0;
}