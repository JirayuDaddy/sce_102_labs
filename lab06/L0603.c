#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416

double circleArea(double r){
    double area;
    area = PI * r * r;
    return area;
}

double cylinVol(double r, double h){
    double vol = circleArea(r) * h;
    return vol;
}

int main(){
    double r, h;

    printf("Circle and Cylinder Volume Calculator\n\n");

    printf("Circle\n");
    printf("Enter radius r: ");
    scanf("%lf", &r);
    printf("Circle area %.2f\n\n", circleArea(r));

    printf("Cylinder\n");
    printf("Enter height h: ");
    scanf("%lf", &h);
    printf("Cylinder volume %.2f\n", cylinVol(r, h));

    return 0;
}
