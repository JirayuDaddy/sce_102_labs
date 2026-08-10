#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float circleArea(float p,float r){
    return p*pow(r,2);
}
float cylinVol(float p,float r,float h){
    return p*pow(r,2)*h;
}
int main() {
    float x,r,h,p=3.1416;
    printf("Circle and Cylinder Volume Calculator\n");
    printf("\nCircle\n");
    printf("Enter radius r: ");
    scanf("%f", &r);
    x = circleArea(p,r);
    printf("Circle area %.2f\n", x);
    printf("\nCylinder\n");
    printf("Enter height h: ");
    scanf("%f", &h);
    x = cylinVol(p,r,h);
    printf("Cylinder area %.2f", x);
}