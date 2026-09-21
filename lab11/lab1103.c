#include <stdio.h>
#include <string.h>

struct car {
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

int main() {
    struct car myCar = {"Blue", 162.5f, 985.36f, 40.0f, 1};
    struct car *p = &myCar;

    printf("myCar properties\n");
    printf("---------------\n");
    printf("Color = %s\n", myCar.color);
    printf("Max Speed = %.2f\n", myCar.maxSpeed);
    printf("Weight = %.2f\n", myCar.weight);
    printf("Fuel Tank = %.2f\n", myCar.fuelTank);
    printf("Car Type = %d\n\n", myCar.carType);

    p->weight = 1234.5f;
    p->maxSpeed = 234.5f;
    strcpy(p->color, "Bronze");

    printf("myCar properties\n");
    printf("---------------\n");
    printf("Color = %s\n", myCar.color);
    printf("Max Speed = %.2f\n", myCar.maxSpeed);
    printf("Weight = %.2f\n", myCar.weight);
    printf("Fuel Tank = %.2f\n", myCar.fuelTank);
    printf("Car Type = %d\n", myCar.carType);

    return 0;
}
