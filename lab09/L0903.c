#include <stdio.h>

float speedDistance(float speed, int *time)
{
    float distance = speed * (*time);
    *time += 3;
    return distance;
}

int main()
{
    int time = 1;
    float speed;

    printf("Distance calculator\n");
    printf("--------------------\n");
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter speed: ");
        scanf("%f", &speed);
        
        float distance = speedDistance(speed, &time);
        printf("step %d => distance %.2f, time %d\n", i, distance, time);
    }
    return 0;
}
