#include <stdio.h>


float speedDistance(float speed, int *time) {
 
    float distance = speed * (*time);

    *time = *time + 3;

    return distance;
}

int main() {
  
    int time = 1;
    float speed, distance;

 
    for (int i = 1; i <= 3; i++) {
   
        printf("Enter speed %d: ", i);
        scanf("%f", &speed);

        distance = speedDistance(speed, &time);

        printf("Distance = %.2f, Time = %d\n\n", distance, time);
    }

    return 0;
}