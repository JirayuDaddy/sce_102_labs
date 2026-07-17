
#include <stdio.h>
#include <stdlib.h>

int main() {

    int Centimeter;
    int MILLI_RATE = 10;
    int METER_RATE = 100;
    float INCH_RATE = 2.54; 
    
    int Millimeter;
    float Meter;            
    float Inch;            

    printf("Enter length in Centimeter : \n"); 
    scanf("%d", &Centimeter);                 

    Millimeter = Centimeter * MILLI_RATE;
    Meter = (float)Centimeter / METER_RATE;   
    Inch = Centimeter / INCH_RATE;

    printf("%d cm = %d mm = %.2f m = %.2f inch\n", Centimeter, Millimeter, Meter, Inch);

    return 0;
}