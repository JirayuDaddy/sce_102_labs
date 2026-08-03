#include <stdio.h> 
#include <stdlib.h>

int main() {
    float a, v;
    int t = 0;
    float u = 0;

    printf("Starting the engine\n");
    printf("Enter the acceleration value (m/s^2): ");
    scanf("%f", &a);

    while (1) {
        v = u + (a * t);
        printf("Current speed at t=%d is %.3f m/s\n", t, v);

        if (v >= 20)
            break;

        t++;
    }

    return 0;
}