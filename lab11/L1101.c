#include <stdio.h>

struct car
{
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;

} myCar = {"Blue", 165.5, 985.36, 40, 1};

int main()
{
    printf("myCar properties\n---------------\n");
    printf("Color = %s\n", myCar.color);
    printf("Max Speed = %.2f\n", myCar.maxSpeed);
    printf("Weight = %.2f\n", myCar.weight);
    printf("Fuel Tank = %.2f\n", myCar.fuelTank);
    printf("Car Type = %d", myCar.carType);
    return 0;
}