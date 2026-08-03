#include <stdio.h>

int main(void) {
    double a, u = 0, v;
    int t = 0;

    printf("Starting the engine\n");
    printf("Enter the acceleration value (m/s^2): ");
    scanf("%lf", &a);

    v = u + a * t;
    printf("Current speed at t=%d is %.3f m/s\n", t, v);

    while (v < 20) {
        t++;
        v = u + a * t;
        printf("Current speed at t=%d is %.3f m/s\n", t, v);
    }

    return 0;
}
