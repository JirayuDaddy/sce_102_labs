#include <stdio.h>

struct car
{
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
} inCar[3];

int main()
{
    printf("Enter properties for 3 cars\n");
    printf("-------------------------------\n");
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Car #%d\n", i + 1);
        printf("Enter color: ");
        scanf("%s", inCar[i].color);
        printf("Enter max speed: ");
        scanf("%f", &inCar[i].maxSpeed);
        printf("Enter weight: ");
        scanf("%f", &inCar[i].weight);
        printf("Enter fuel tank: ");
        scanf("%f", &inCar[i].fuelTank);
        printf("Car type: ");
        scanf("%d", &inCar[i].carType);
        printf("\n");
    }

    printf("Enter properties\n");
    printf("-------------------------------\n");

    for (i = 0; i < 3; i++)
    {
        printf("Car #%d properties\n", i + 1);
        printf("---------------\n");
        printf("Color = %s\n", inCar[i].color);
        printf("Max Speed = %.2f\n", inCar[i].maxSpeed);
        printf("Weight = %.2f\n", inCar[i].weight);
        printf("Fuel Tank = %.2f\n", inCar[i].fuelTank);
        printf("Car Type = %d\n", inCar[i].carType);
    }
    return 0;
}