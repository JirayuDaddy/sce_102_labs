#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

float PI = 3.1416 ;

float circleArea_(float r) {
return (PI*pow(r,2));
}
float cylinVol_(float h,float x) {
return (h*PI*pow(x,2));
}

int main() {

    float r,h ;

    printf("Circle and Cylinder Volume Calculator");
    printf("\n");
    printf("Circle\n");
    printf("Enter radius r : ");
    scanf("%f",&r);
    printf("Circle area %.2f \n",circleArea_(r));

    printf("Cylinder\n");
    printf("Enter  height h : ");
    scanf("%f",&h);
    printf("Cylinder volume %.2f \n",cylinVol_(h,r));

    return 0 ;
     
}