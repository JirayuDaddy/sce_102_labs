#include <stdio.h>
#include <string.h>

struct car {
char color[50];
float maxSpeed ;
float weight ;
float fuelTank ;
int carType ;
};

struct car devcar(struct car inCar ){
    struct car outCar;
    outCar.maxSpeed = inCar.maxSpeed + 20;
    outCar.weight = inCar.weight + 50;
    outCar.fuelTank = inCar.fuelTank + 10;
    outCar.carType = inCar.carType;
    strcpy(outCar.color, inCar.color);
    return outCar;
};



int main () {
struct car myCar;

strcpy (myCar.color,"Blue");
myCar.maxSpeed = 162.5;
myCar.weight = 985.36;
myCar.fuelTank = 40;
myCar.carType =1;

struct car Newcar = devcar(myCar);

printf("myCar properties\n");
    printf("---------------\n");
    printf("Color = %s\n", myCar.color);
    printf("Max Speed = %.2f\n", myCar.maxSpeed);
    printf("Weight = %.2f\n", myCar.weight);
    printf("Fuel Tank = %.2f\n", myCar.fuelTank);
    printf("Car Type = %d\n\n", myCar.carType);

    
printf("NewCar properties\n");
    printf("---------------\n");
    printf("Color = %s\n", Newcar.color);
    printf("Max Speed = %.2f\n", Newcar.maxSpeed);
    printf("Weight = %.2f\n", Newcar.weight);
    printf("Fuel Tank = %.2f\n", Newcar.fuelTank);
    printf("Car Type = %d\n", Newcar.carType);

    return 0;
}