#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float function_a(float y){
    return sqrt(pow(y,2)+45);
}
float function_b(float y){
    return pow(y,2)+3*y+1;
}
int main() {
    float x,y;
    printf("Enter tne number for y: ");
    scanf("%f", &y);
    printf("\nResults\n");
    x = function_a(y);
    printf("x from ep.1 = %.2f\n", x);
    x = function_b(y);
    printf("x from ep.2 = %.2f", x);
}