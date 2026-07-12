#include <stdio.h>
#include <stdlib.h>

int main(){

    float enter_centi;
    float MILLI_RATE = 10;
    float METER_RATE = 100;
    float INCH_RATE = 2.54;
    printf("Enter length in centimeter:");
    scanf("%f", &enter_centi);
    printf("%.2f centimeter = %.2f millimeters, %.2f meters, and %.2f inches", enter_centi, enter_centi * MILLI_RATE, enter_centi / METER_RATE, enter_centi / INCH_RATE);

    return 0;
}