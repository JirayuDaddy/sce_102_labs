#include <stdio.h>
#include <string.h>

struct car
{
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

void showCar(const char *name, struct car c)
{
    printf("%s properties\n", name);
    printf("---------------\n");
    printf("Color = %s\n", c.color);
    printf("Max Speed = %.2f\n", c.maxSpeed);
    printf("Weight = %.2f\n", c.weight);
    printf("Fuel Tank = %.2f\n", c.fuelTank);
    printf("Car Type = %d\n", c.carType);
}

int main()
{
    struct car myCar;
    struct car *p;

    strcpy(myCar.color, "Blue");
    myCar.maxSpeed = 162.5;
    myCar.weight = 985.36;
    myCar.fuelTank = 40;
    myCar.carType = 1;

    showCar("myCar", myCar);

    p = &myCar;              
    p->weight = 1234.5;      
    p->maxSpeed = 234.5;
    strcpy(p->color, "Bronze");

    showCar("myCar", myCar);

    return 0;
}