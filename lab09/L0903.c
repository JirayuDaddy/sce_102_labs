#include <stdio.h>

float speedDistance(float speed, int *time)
{
    float distance = speed * (*time);
    *time = *time + 3;
    return distance;
}

int main()
{
    int time = 1;
    float speed, distance;
    int i;

    printf("Distance calculator\n");
    printf("-----------------------\n");

    for (i = 1; i <= 3; i++)
    {
        printf("Enter speed: ");
        scanf("%f", &speed);

        distance = speedDistance(speed, &time);
        printf("step %d => distance %.2f, time %d\n", i, distance, time);
    }

    return 0;
}
