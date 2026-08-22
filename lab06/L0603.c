#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float function_a(float r, float pi){
    return pi*r*r;
}
float function_b(float r, float h, float pi){
    return pi*r*r*h;
}
int main(){
    float x,r,h,pi = 3.1416;
    printf("Circle and Cylinder Volume Calculator");
    printf("\nCircle\n");
    printf("Enter radius r: ");
    scanf("%f", &r);
    x = function_a(r,pi);
    printf("Circle area = %.2f\n", x);
    printf("\nCylinder\n");
    printf("Enter height h: ");
    scanf("%f", &h);
    x = function_b(r,h,pi);
    printf("Cylinder volume = %.2f\n", x);
    return 0;
}