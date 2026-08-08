#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.1416

float circleArea(int radius)
{
    float area;
    area = pi * pow(radius , 2);
    return area;
}
float cylinVol(int radius , int height)
{
    float volume;
    volume = circleArea(radius) * height;
    return volume;
}
int main(){
    
    int radius = 0;
    int height = 0;
    
    printf("Circle and Cylinder Volume Calculator\n\n");
    printf("Circle\n");
    printf("Enter radius r: ");
    scanf("%d", &radius);
    printf("Circle area %.2f\n\n", circleArea(radius));

    printf("Cylinder\n");
    printf("Enter height h: ");
    scanf("%d", &height);
    printf("Cylinder volume %.2f", cylinVol(radius , height));
    return 0;
}