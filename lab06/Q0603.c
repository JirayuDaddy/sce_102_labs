#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
float Circle_area(float r){
    return (M_PI)*r*r;}
float Cylinder_volume(float r,float h){
    return (M_PI)*r*r*h;}
 
int main(void){
    float r=0,h=0,out=0;
    printf("Circle and Cylinder Volume Calculator");
    printf("\n\nCircle\nEnter radius r: ");
    scanf("%f",&r);
    out=Circle_area(r);
    printf("Circle area %.2f",out);
    printf("\n\nCylinder\nEnter height h: ");
    scanf("%f",&h);
    out=Cylinder_volume(r,h);
    printf("Cylinder volume %.2f",out);
    return 0;
}