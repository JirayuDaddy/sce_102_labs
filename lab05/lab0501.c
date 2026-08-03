#include <stdio.h>
#include <stdlib.h>
int main() {
    float a, v, u = 0;
    int t = 0;
    printf("Starting the engine\n");
    printf("Enter the acceleration value (m/s^2): ");
    scanf("%f", &a);
    while (1) {
        v = u + a * t;
        printf("The final velocity after %d seconds is: %.2f m/s\n", t, v);
        if (v >= 20) 
        break;
        t++;
    }
    return 0;

}