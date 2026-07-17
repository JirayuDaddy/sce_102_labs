#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int r = 0, h = 0;
    float pi = 3.14159;
    printf("Enter a radius: ");
    scanf("%d", &r);
    printf("Enter a height: ");
    scanf("%d", &h);

    printf("Circle area = %f\n", pi * pow(r, 2));
    printf("Sphere volume = %f\n", 4.0 / 3.0 * pi * pow(r, 3));
    printf("Cylinder volume = %f\n", pi * pow(r, 2) * h);
    return 0;
}