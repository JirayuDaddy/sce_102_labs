#include <stdio.h>
#include <math.h>

int main()
{
    int condition;
    float radius, area , pi = 3.1416;
    printf("Enter r : ");
    scanf("%f",&radius);

    area = pi * radius * radius;

    printf("\nCircle area = %.2f\n",area);

    condition = (area >=0 ) && (area >= 100);
    printf("Big circle %d",condition);
    return 0;
}