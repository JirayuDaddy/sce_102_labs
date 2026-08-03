#include <stdio.h>

int main()
{
    float initial_velo=0,velocity=0,acceleration=0,time=0;
    printf("Starting the engine\n");
    printf("Enter the acceleration value (m/s^2) : ");
    scanf("%f",&acceleration);
    velocity = initial_velo + time*acceleration;
    while(velocity<=20)
    {
        velocity = initial_velo + time*acceleration;
        printf("Current speed at t=%d is %.3f m/s\n",time,velocity);
        time++;
    }
    return 0;
}