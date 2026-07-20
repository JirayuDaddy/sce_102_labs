#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
        int x1,x2,x3,x4;
        float rms;
    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter x2: ");
    scanf("%d", &x2);
    printf("Enter x3: ");
    scanf("%d", &x3);
    printf("Enter x4: ");
    scanf("%d", &x4);
    rms = sqrt((x1*x1 + x2*x2 + x3*x3 + x4*x4)/4.0);
    printf("RMS = %.3f\n", rms);
    return 0;
}