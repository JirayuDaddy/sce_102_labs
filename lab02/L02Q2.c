#include <stdio.h>
#include <stdlib.h>

int main(){

    float Enter_centimeter;
    float MILLI_RATE = 10;
    float METER_RATE = 100;
    float INCH_RATE = 2.54;
    printf("Enter length in centimeter: ");
    scanf("%f", &Enter_centimeter);
    printf("\n%.2f centimeter %.2f millimeter %.2f meter %.2f inch",Enter_centimeter,Enter_centimeter*MILLI_RATE , Enter_centimeter/METER_RATE , Enter_centimeter/INCH_RATE );
    return 0;
}

