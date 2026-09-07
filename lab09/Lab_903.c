#include <stdio.h>
#include <stdlib.h>


float speedDistance(float speed, int *time);

int main()
{
    float speed;
    float distance;
    int time = 1;
    int i;

    for (i = 1; i <= 3; i++)
    {
        printf("\nRound %d\n", i);
        printf("Please enter the Speed: ");
        scanf("%f", &speed);
        distance = speedDistance(speed, &time);
        printf("Distance = %.2f\n", distance);
        printf("Time = %d\n", time);
    }

    return 0;
}

float speedDistance(float speed, int *time)
{
    float distance;
    distance = speed * (*time);
    *time = *time + 3;

    return distance;
}