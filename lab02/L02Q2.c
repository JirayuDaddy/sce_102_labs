#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lenght;


    printf("Enter length in centimeter:");
    scanf("%f" , &lenght);
    printf("%.2f centimeter Length in meters = %.2f",lenght , lenght / 100);
    printf("Length in inches = %.2f", lenght / 2.54);
    printf("Length in millimeters = %.2f", lenght * 10);

    return 0;

}
