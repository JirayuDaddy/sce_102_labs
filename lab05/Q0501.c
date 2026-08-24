#include <stdio.h>

int main(void){
    double acceleration;
    double speed = 0.0;
    int time = 0;
    printf("Starting the engine\n\n");
    printf("Enter the acceleration value (m/s^2): ");
    scanf("%lf", &acceleration);
    while(speed < 20.0 && speed >= 0.0){
        printf("\nCurrent speed at t=%d is %.3f m/s\n", time, speed);
        time++;
        speed = acceleration * time;
    }
    printf("\nCurrent speed at t=%d is %.3f m/s\n", time, speed);
    return 0;
}