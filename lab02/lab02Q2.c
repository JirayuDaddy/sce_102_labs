#include <stdio.h>
#include <stdlib.h>
int main()
{
    float centimeter;
    int milimeter = 10;
    int meter = 100;
    int inch = 2.54;
    printf("Enter height in centimeter: ");
    scanf("%f", &centimeter);
    printf("\n%.2f centimeter ", centimeter);
    printf("\n%.2f millimeter", centimeter * milimeter);
    printf("\n%.2f meter", centimeter / meter);
    printf("\n%.2f inch", centimeter / inch);

    return 0;
}