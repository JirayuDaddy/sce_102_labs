#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int y;
float x;
void f()
{
    x = pow(y, 2) + (3 * y) + 1;
    printf("\nx from eq.2 = %.2f", x);
}
int main()
{
    printf("Enter the number for y: ");
    scanf("%d", &y);
    printf("\nResults");
    x = sqrt(pow(y, 2) + 45);
    printf("\nx from eq.1 = %.2f", x);
    f();
}
