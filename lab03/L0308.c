#include <stdio.h>
#include <math.h>
int main()
{
    int r = 0;
    double pi = 3.1416, area;
    printf("Enter r: ");
    scanf("%d", &r);

    area = pi * pow(r, 2);
    printf("Circle area = %.2f\n", area);
    printf("Big circle %d\n", area >= 100);

    return 0;
}
