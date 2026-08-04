#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t=0;
    float a, v=0;
    printf("Starting the engine\n");
    printf("Enter the acceleration value (m/s^2): ");
    scanf("%f", &a);
    while(v<=20){
        v = a * t;
        printf("Current speed at t=%d is %.3f\n", t, v);
        t++;
    }
    return 0;
}