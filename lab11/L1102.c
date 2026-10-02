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

struct car outCar;

struct car devCar(struct car inCar)
{
    outCar.maxSpeed = inCar.maxSpeed + 20;
    outCar.weight = inCar.weight + 50;
    outCar.fuelTank = inCar.fuelTank + 10;
    outCar.carType = inCar.carType;
    strcpy(outCar.color, inCar.color);

    printf("newCar properties\n---------------\n");
    printf("Color = %s\n", outCar.color);
    printf("Max Speed = %.2f\n", outCar.maxSpeed);
    printf("Weight = %.2f\n", outCar.weight);
    printf("Fuel Tank = %.2f\n", outCar.fuelTank);
    printf("Car Type = %d", outCar.carType);
    return outCar;
}

int main()
{
    struct car inCar = {"Blue", 165.5, 985.36, 40, 1};
    struct car outCar;
    printf("myCar properties\n---------------\n");
    printf("Color = %s\n", inCar.color);
    printf("Max Speed = %.2f\n", inCar.maxSpeed);
    printf("Weight = %.2f\n", inCar.weight);
    printf("Fuel Tank = %.2f\n", inCar.fuelTank);
    printf("Car Type = %d\n\n\n", inCar.carType);
    outCar = devCar(inCar);
}