#include <stdio.h> 
#include <stdlib.h> 
#define pi 3.1416
int main()
{
    float r,c =0;
    printf("Enter r : ");
    scanf("%f",&r);
    c = pi * r*r;
    printf("Circle area = %.2f",c);
    r > 100;
    printf("Big circle 1\n");
    scanf("%f",&r);
    r < 100;
    printf("\nBig circle 0");
    scanf("%f",&r);
    return 0;

    
}