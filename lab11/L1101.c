#include <stdio.h>
#include <string.h>

int main()
{
    struct {
        char color[50];
        float maxSpeed;
        float weight;
        float fuelTank;
        int carType;
    } car;

    strcpy(car.color,"Blue");
    car.maxSpeed = 162.5;
    car.weight = 985.36;
    car.fuelTank = 40;
    car.carType = 1;
    printf("myCar properties\n");
    printf("----------------\n");
    printf("Color = %s\n",car.color);
    printf("Max Speed = %.2f\n",car.maxSpeed);
    printf("Weight = %.2f\n",car.weight);
    printf("Fuel Tank = %.2f\n",car.fuelTank);
    printf("Car Type = %d\n",car.carType);

    return 0;
}