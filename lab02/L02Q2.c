#include <stdio.h>
#include <stdlib.h>
int main() {
    float centimeter;
    printf("Enter length in centimeter: ");
    scanf("%f", &centimeter);
    float millimeter = centimeter * 100.0;
    float meter = centimeter / 100.0;
    float inch = centimeter / 2.54;
    printf("\n%.2f centimeters = %.2f millimeters, %.2f meters, and %.2f inches", centimeter, millimeter, meter, inch);
    return 0;
}