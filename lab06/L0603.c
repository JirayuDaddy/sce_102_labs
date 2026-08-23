#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

float circleArea(float);
float cylinVol(float,float);

int main()
{
    float r, h, area, vol;
    printf("Circle and Cylinder Volume Calculator\n\n");
    printf("Circle\n");
    printf("Enter radius r: ");
    scanf("%f",&r);
    area=circleArea(r);
    printf("Circle area %.2f\n", area);
    printf("\nCylinder\n");
    printf("Enter height h: ");
    scanf("%f",&h);
    vol=cylinVol(r,h);
    printf("Cylinder volume %.2f\n", vol);
    return 0;
}

float circleArea(float r){
    return PI*r*r;
}

float cylinVol(float r, float h){
     return circleArea(r)*h;
}
