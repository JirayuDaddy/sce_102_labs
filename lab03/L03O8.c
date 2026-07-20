#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int r,respond;
    float Circle_area;
    float pi=3.1416;

    printf("Enter r: ");
    scanf("%d",&r);

    Circle_area = pi * pow(r,2);

    printf("\n"); 

    printf("Circle area = %.2f\n",Circle_area);

    respond = (Circle_area >= 100);
    printf("Big circle %d",respond);

    return 0 ;
}
