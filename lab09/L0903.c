#include <stdio.h>

float speedDistance(float speed, int *time)
{
    float distance = speed * (*time);
    *time += 3;
    return distance;
}

int main(void)
{
    float speed;
    float distance;
    int time = 1;
    int step;

    printf("Distance calculator\n");
    printf("-----------------------\n");

    for (step = 1; step <= 3; step++) {
        printf("Enter speed: ");
        scanf("%f", &speed);
        distance = speedDistance(speed, &time);
        printf("step %d => distance %.2f, time %d\n",
               step, distance, time);
    }

    return 0;
}
