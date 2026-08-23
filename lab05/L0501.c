#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    float a, v;
    int t = 0, u = 0;

    printf("Starting the engine\n");
    printf("Enter the acceleration volue (m/s^2) ");
    scanf("%f" , &a);
    while (v < 20)
    {
        v = u + a * t;
        printf("Current speed at t=%d is %.3f m/s\n", t, v);
        t++;
    }
    return 0;
}    


