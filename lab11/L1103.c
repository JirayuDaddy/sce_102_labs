#include <stdio.h>
#include <string.h>

struct car
{
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
} inCar = {"Blue", 165.5, 985.36, 40, 1};

int main()
{
    printf("myCar properties\n---------------\n");
    printf("Color = %s\n", inCar.color);
    printf("Max Speed = %.2f\n", inCar.maxSpeed);
    printf("Weight = %.2f\n", inCar.weight);
    printf("Fuel Tank = %.2f\n", inCar.fuelTank);
    printf("Car Type = %d", inCar.carType);

    struct car *p = &inCar;
    p->weight = 1234.5;
    p->maxSpeed = 234.5;
    strcpy(p->color, "Bronze");

    printf("\n\nmyCar properties\n---------------\n");
    printf("Color = %s\n", inCar.color);
    printf("Max Speed = %.2f\n", inCar.maxSpeed);
    printf("Weight = %.2f\n", inCar.weight);
    printf("Fuel Tank = %.2f\n", inCar.fuelTank);
    printf("Car Type = %d", inCar.carType);
    return 0;
}