#include <stdio.h>
#include <string.h>

struct car{
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

int main() {
    struct car myCar;
    strcpy(myCar.color,"Blue");
    myCar.maxSpeed=162.5;
    myCar.weight=985.36;
    myCar.fuelTank=40;
    myCar.carType=1;

    printf("myCar properties\n");
    printf("---------------\n");
    printf("Color = %s\n",myCar.color);
    printf("MaxSpeed = %.2f\n",myCar.maxSpeed);
    printf("Weight = %.2f\n",myCar.weight);
    printf("Fuel Tank = %.2f\n",myCar.fuelTank);
    printf("Car Type = %d\n",myCar.carType);

    struct car *p = &myCar;
    p->weight = 1234.5;
    p->maxSpeed = 234.5;
    strcpy(p->color,"Bronze");

    printf("\nmyCar properties\n");
    printf("---------------\n");
    printf("Color = %s\n",myCar.color);
    printf("MaxSpeed = %.2f\n",myCar.maxSpeed);
    printf("Weight = %.2f\n",myCar.weight);
    printf("Fuel Tank = %.2f\n",myCar.fuelTank);
    printf("Car Type = %d\n",myCar.carType);
    return 0;
}