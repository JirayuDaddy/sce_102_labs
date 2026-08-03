#include <stdio.h>
#include <math.h>

int main()
{
    float r, area, pi;
    pi = 3.1416;
    printf("Enter r: ");
    scanf("%f", &r);
    area = pi*r*r ;
    printf("Circle area = %.2f\n", area);
    int resuit = !(area > 100);
    printf("Big circle %d",resuit);
    return 0;
}