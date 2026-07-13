#include <stdio.h>
#include <stdlib.h>
int main()
{
    float centi;
    printf("Enter length in centimeter: ");
    scanf("%f",&centi);
    printf("%.21f centimeters = %.2f millimeters, %.2f meters, %.2f inches",centi, centi*10, centi/100, centi/2.54);
    return 0;

}