#include <stdio.h>
#include <stdlib.h>
int main()
{
    float acceleration, initial_velocity = 0, final_velocity;
    int time = 0;
    printf("Starting the engine\n");
    printf("Enter the acceleration value (m/s^2): ");
    scanf("%f", &acceleration);
    while (1)
    {
        final_velocity = initial_velocity + acceleration * time;
        printf("Current speed at t=%d is %.3f m/s\n", time, final_velocity);
        if (final_velocity >= 20)
        {
            break;
        }
        time++;
    }
    return 0;
}
