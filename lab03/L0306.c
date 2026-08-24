#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    const double PI=4.0*atan(1.0);
    float r=0,h=0;
    printf("Enter r: ");
    scanf("%f",&r);
    printf("Enter h: ");
    scanf("%f",&h);
    printf("\nCircle area = %.2f", PI* pow(r,2));
    printf("\n\nSphere volume = %.2f",4/3*PI*pow(r,3));
    printf("\n\nCylinder volume = %.2f",PI*pow(r,2)*h);
    return 0;
}