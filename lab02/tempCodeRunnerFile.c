#include <stdio.h>
#include <stdlib.h>

int main(){

    float enter_centi;
    float MILLI_RATE = 10;
    float METER_RATE = 100;
    float INCH_RATE = 2.54;
    printf("Enter length in centimeter:");
    scanf("%.2f", &enter_centi);
    printf("%.2f centimeter = %.2f millimeters", enter_centi, enter_centi * MILLI_RATE);

    return 0;
}