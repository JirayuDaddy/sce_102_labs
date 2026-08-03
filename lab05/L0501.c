#include <stdio.h>
int main() {
    float a;
    float u = 0.0;
    float v = 0.0;
    int t = 0;
     printf("starting the engine \n");
    printf("enter the acceleration value (m/s^2): ");
    scanf("%f", &a);
    while (v < 20.0) {
        v = u + (a * t);
        printf("Current speed at t=%d is v=%.3f m/s\n", t, v);
        t++;
    }

    printf("\n");

    return 0;
}