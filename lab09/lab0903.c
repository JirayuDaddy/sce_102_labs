#include <stdio.h>
#include <stdlib.h>
float speedDistance(float speed, int *time);
int main() {
    float speed;
    int time = 1;
    float distance;
    for (int i = 0; i < 3; i++) {
        printf("Enter speed: ");
        scanf("%f", &speed);
        distance = speedDistance(speed, &time);
        printf("Distance = %.2f, Time = %d\n", distance, time);
    }
    return 0;
}
float speedDistance(float speed, int *time) {
    float distance = speed * (*time);
    *time += 3;
    return distance;
}