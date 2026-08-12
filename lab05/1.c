#include <stdio.h>
#include <stdlib.h>

int main() {
    float a;
    float u = 0.0;
    float v = 0.0;
    int t = 0;

    printf("Starting the engine\n");
    printf("Enter the acceleration value (m/s^2): ");
    scanf("%f", &a);

    while (v < 20.0) {
        v = u + (a * t);
        printf("Current speed at t=%d is %.3f m/s\n", t, v);
        t++;
    }

    return 0;
}