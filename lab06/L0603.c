#include <stdio.h>
#include <math.h>

float Pi=3.1416;

 float circleArea(float r){
    return (Pi*pow(r, 2));
 }
    float cylinVol(float r , float h){
        return (circleArea(r)*h);
    }
int main(){
float r , h;

printf("Circle and Cylinder Volume Calculator\n\n");
printf("Circle\n");
printf("Enter radius r: ");
scanf("%f",&r);
printf("Circle area %.2f\n",circleArea(r));

printf("Cylinder\n");
printf("Enter height h: ");
scanf("%f",&h);
printf("Cylinder volume %.2f\n",cylinVol(r,h));
return 0;
}