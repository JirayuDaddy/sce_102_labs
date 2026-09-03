#include <stdio.h>
float speedDistance(float speed, int *time) {
    float distance = speed * *time;
    *time += 3;
    return distance;
}
int main(void) {
    float speed;
    int time = 1;
    printf("Distance calculator\n");
    printf("-----------------------\n");
    for (int step = 1; step <= 3; step++) {
        printf("Enter speed: ");
        scanf("%f", &speed);
        float distance = speedDistance(speed, &time);
        printf("step %d => distance %.2f, time %d\n", step, distance, time);
    }
    return 0;
}