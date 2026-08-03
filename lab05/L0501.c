#include <stdio.h>

int main() {
    float v, u, a;
    int t;

    u = 0;
    t = 0;

    printf("Starting the engine\n");
    printf("Enter the acceleration value (m/s^2): ");
    scanf("%f", &a);

    while (1) {
        v = u + a * t;
        printf("Current speed at t=%d is %.3f m/s\n", t, v);

        if (v >= 20)
            break;

        t++;
    }

    return 0;
}