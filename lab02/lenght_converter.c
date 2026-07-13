#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter length in centimeters: ");
    float centimeters;
    scanf("%f", &centimeters);
    printf("Length in millimeters: %.2f, ", centimeters * 10);
    printf("Length in inches: %.2f, ", centimeters / 2.54);
    printf("Length in meters: %.2f\n ", centimeters / 100);
    
    return 0;
}