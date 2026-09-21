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
    // printf("\nmyCar_result properties\n");
    // printf("----------------\n");
    // printf("Color = %s\n",outCar.color);
    // printf("Max Speed = %.2f\n",outCar.maxSpeed);
    // printf("Weight = %.2f\n",outCar.weight);
    // printf("Fuel Tank = %.2f\n",outCar.fuelTank);
    // printf("Car Type = %d\n",outCar.carType);
    return outCar;
}


int main()
{
    struct car myCar;
    struct car myCarresult;
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
    myCarresult = devCar(myCar);
    printf("\nmyCarresult properties\n");
    printf("----------------\n");
    printf("Color = %s\n",myCarresult.color);
    printf("Max Speed = %.2f\n",myCarresult.maxSpeed);
    printf("Weight = %.2f\n",myCarresult.weight);
    printf("Fuel Tank = %.2f\n",myCarresult.fuelTank);
    printf("Car Type = %d\n",myCarresult.carType);
    return 0;
}