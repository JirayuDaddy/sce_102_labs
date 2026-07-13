#include <stdio.h>
#include <stdlib.h>


#define MILLI_RATE 10.0
#define METER_RATE 100.0
#define INCH_RATE 2.54

int main()
{
    float centimeter;
    float millimeter, meter, inch;
 
    printf("=== Length Converter ===\n\n");

    printf("Enter length in Centimeter: ");
    scanf("%f", &centimeter);
    
    millimeter = centimeter * MILLI_RATE;
    meter = centimeter / METER_RATE;
    inch = centimeter / INCH_RATE;

    printf("\n--- Result ---\n");
    printf("Centimeter: %.2f cm\n", centimeter);
    printf("Millimeter: %.2f mm\n", millimeter);
    printf("Meter     : %.2f m\n", meter);
    printf("Inch      : %.2f inch\n", inch);

    return 0;
}