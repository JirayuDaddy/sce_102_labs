#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float y, x;
    printf("Enter the number for y: ");
    scanf("%f", &y);
    printf("\nResults\n");
    x=sqrt(pow(y,2)+45);
    printf("x from eq.1 = %.2f\n", x);
    x=(pow(y,2))+(3*y)+1;
    printf("x from eq.2 = %.2f\n", x);
    return 0;
}
