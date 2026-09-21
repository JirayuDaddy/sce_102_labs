#include <stdio.h>
#include <string.h>

struct car{
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
    char color[50];
};

struct car devCar(struct car inCar)
{
    struct car outCar;
    outCar.maxSpeed = inCar.maxSpeed + 20;
    outCar.weight = inCar.weight + 50;
    outCar.fuelTank = inCar.fuelTank + 10.00;
    outCar.carType = inCar.carType;
    strcpy(outCar.color,inCar.color);
    return outCar;
}


int main()
{
    struct car myCar;
    struct car myCarresult;
    struct car *p = &myCar;
    strcpy(myCar.color,"Blue");
    myCar.maxSpeed = 162.5;
    myCar.weight = 985.36;
    myCar.fuelTank = 40.00;
    myCar.carType = 1;
    printf("myCar properties\n");
    printf("----------------\n");
    printf("Color = %s\n",myCar.color);
    printf("Max Speed = %.2f\n",myCar.maxSpeed);
    printf("Weight = %.2f\n",myCar.weight);
    printf("Fuel Tank = %.2f\n",myCar.fuelTank);
    printf("Car Type = %d\n",myCar.carType);
    strcpy(p->color,"Bronze");
    p->maxSpeed = 234.5;
    p->weight = 1234.5;
    printf("\nmyCar properties\n");
    printf("----------------\n");
    printf("Color = %s\n",myCar.color);
    printf("Max Speed = %.2f\n",myCar.maxSpeed);
    printf("Weight = %.2f\n",myCar.weight);
    printf("Fuel Tank = %.2f\n",myCar.fuelTank);
    printf("Car Type = %d\n",myCar.carType);
    return 0;
}