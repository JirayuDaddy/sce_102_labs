#include <stdio.h>

int main() {
float a, v = 0.0f;
int t = 0;
printf("Starting the engine\n");
printf("Enter the acceleration value (m/s^2): ");
scanf("%f", &a);
while (v < 20.0f) {
v = a * t;
printf("Current speed at t=%d is %.3f m/s\n", t, v);
t++;
}

return 0;
}