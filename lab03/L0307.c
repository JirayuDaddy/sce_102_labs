#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1, x2, x3, x4;
    double Xrms = 0;
    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter x2: ");
    scanf("%d", &x2);
    printf("Enter x3: ");
    scanf("%d", &x3);
    printf("Enter x4: ");
    scanf("%d", &x4);
    Xrms = sqrt((pow(x1, 2) + pow(x2, 2) + pow(x3, 2) + pow(x4, 2)) / 4);
    printf("Xrms = %.3f\n", Xrms);
    return 0;
}