<<<<<<< HEAD
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
=======
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
>>>>>>> b49dcfd2d22634d610dba96f1da2ad43d5909583
}