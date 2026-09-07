#include <stdio.h>

float speedDistance(float speed, int *time) {
    float distance = speed * (*time); 
    *time += 3;                       
    return distance;
}

int main() {
    float enea1;
    int ene2 = 1;

    printf("Distance calculator\n-------------------\n");
    for (int ene3 = 1; ene3 <= 3; ene3++) {
        printf("Enter speed: ");
        scanf("%f", &enea1);
        float dist = speedDistance(enea1, &ene2);
        printf("step %d => distance %.2f, time %d\n", ene3, dist, ene2);
    }

    return 0;
} 