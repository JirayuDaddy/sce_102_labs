#include <stdio.h>
#include <string.h>

struct car{
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

struct car devCar(struct car inCar){
    struct car outCar;
    outCar.maxSpeed=inCar.maxSpeed+20; 
    outCar.weight=inCar.weight+50; 
    outCar.fuelTank=inCar.fuelTank+10; 
    outCar.carType=inCar.carType; 
    strcpy(outCar.color,inCar.color);
    return outCar;
}

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
    printf("Car Type = %d\n\n",myCar.carType);

    struct car newCar = devCar(myCar);

    printf("myCar properties\n");
    printf("---------------\n");
    printf("Color = %s\n",newCar.color);
    printf("MaxSpeed = %.2f\n",newCar.maxSpeed);
    printf("Weight = %.2f\n",newCar.weight);
    printf("Fuel Tank = %.2f\n",newCar.fuelTank);
    printf("Car Type = %d",newCar.carType);
    return 0;
}