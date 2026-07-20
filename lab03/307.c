#include <stdio.h>
#include <math.h> 

int main() {
    double x1, x2, x3, x4, xrms;
    int n = 4;

    
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter x3: ");
    scanf("%lf", &x3);
    printf("Enter x4: ");
    scanf("%lf", &x4);

    
    double sum_squares = (x1 * x1) + (x2 * x2) + (x3 * x3) + (x4 * x4);
    xrms = sqrt(sum_squares / n);

    
    printf("\nxrms = %.3f\n", xrms);

    return 0;
}