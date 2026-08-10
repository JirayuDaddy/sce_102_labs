#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.1416

double circleArea(int r)
{
    double circle_area =0;
    circle_area = pi*r*r;
    return circle_area;
}

double cylinVol(int r , int height)
{
    double cylin_vol = 0;
    cylin_vol = pi * r * r * height;
    return cylin_vol;
}

int main()
{
    int r=0,height=0;
    double _circle_area=0,_cylin_vol=0;
    printf("Circle and Cylinder Volume Calculator");
    printf("\nCircle");
    printf("\nEnter radius r : ");
    scanf("%d",&r);
    _circle_area = circleArea(r);
    printf("\nCircle area %.2f",_circle_area);
    printf("\nCylinder");
    printf("\nEnter the height h : ");
    scanf("%d",&height);
    _cylin_vol = cylinVol(r,height);
    printf("\nCylinder volume %.2f",_cylin_vol);
    return 0;
}