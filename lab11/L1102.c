#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct car {
    char color[50] ;
    float maxspeed ;
    float weight ;
    float fueltank ; 
    int carType ;
};

struct car devcar(struct car inCar) {

    struct car outCar;

    outCar.maxspeed = inCar.maxspeed + 20;
    outCar.weight = inCar.weight + 50;
    outCar.fueltank = inCar.fueltank + 10;
    outCar.carType = inCar.carType;
    strcpy(outCar.color, inCar.color);

    return outCar ;
}

int main() {

    struct car myCar;
    struct car outCar;

    strcpy(myCar.color, "Blue");
    myCar.maxspeed = 162.5;
    myCar.weight = 985.36;
    myCar.fueltank = 40;
    myCar.carType = 1;

    printf("myCar properties");
    printf("\n----------------\n");
    printf("Color = %s\n",myCar.color);
    printf("Max Speed = %.2f\n",myCar.maxspeed);
    printf("Weight = %.2f\n",myCar.weight);
    printf("Feul Tank = %.2f\n",myCar.fueltank);
    printf("Car Type = %d\n",myCar.carType);

    outCar = devcar(myCar);

    printf("\nnewCar properties");
    printf("\n----------------\n");
    printf("Color = %s\n", outCar.color);
    printf("Max Speed = %.2f\n", outCar.maxspeed);
    printf("Weight = %.2f\n", outCar.weight);
    printf("Feul Tank = %.2f\n", outCar.fueltank);
    printf("Car Type = %d\n", outCar.carType);

    return 0;

}