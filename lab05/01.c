#include <stdio.h> 
#include <stdlib.h> 
int main()
{
    float a,u = 0.0, v;
    int t =0;
    printf("Starting the engine\n");
    printf("Enter the acceleration value (m/s^2) : ");
    scanf("%f, &a");
    while (v >=20)
    {
        v = u + (a * t);
        printf("Current speed at t=%d is %.3f m/s",t,v);
        
        
        t++;     
    }
    return 0;

}