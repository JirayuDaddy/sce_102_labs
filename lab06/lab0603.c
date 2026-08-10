#include <stdio.h>

float circleArea(float r)
{
    return 3.1416 * r * r;
}

float cylinVol(float r, float h)
{
    return circleArea(r) * h;
}

int main()
{
    float r, h;
    float area, volume;

    printf("Circle and Cylinder Volume Calculator\n");

    printf("Circle\n");
    printf("Enter radius r: ");
    scanf("%f", &r);

    area = circleArea(r);
    printf("Circle area %.2f\n", area);

    printf("Cylinder\n");
    printf("Enter height h: ");
    scanf("%f", &h);

    volume = cylinVol(r, h);
    printf("Cylinder volume %.2f\n", volume);

    return 0;
}