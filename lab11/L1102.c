#include <stdio.h>
#include <string.h> 

struct car
{
    char color [50];
    float maxspeed;
    float weight;
    float fueltank;
    int cartype;
};

struct car devCar(struct car inCar)
{
    struct car outCar;

    outCar.maxspeed = inCar.maxspeed + 20;
    outCar.weight   = inCar.weight + 50;
    outCar.fueltank = inCar.fueltank + 10;
    outCar.cartype  = inCar.cartype;
    strcpy(outCar.color, inCar.color);
    
    return outCar;
};

int main ()
{
    struct car mycar;
    struct car devcar;
    strcpy(mycar.color, "blue");
    mycar.maxspeed = 162.5;
    mycar.weight = 985.36;
    mycar.fueltank = 40;
    mycar.cartype = 1; 

    printf("myCar properties\n");
    printf("----------------------\n");
    printf("Color = %s\n", mycar.color);
    printf("Max Speed = %.2f\n", mycar.maxspeed);
    printf("Weight = %.2f\n", mycar.weight);
    printf("Fuel Tank = %.2f\n", mycar.fueltank);
    printf("Car type = %d", mycar.cartype);

    devcar = devCar(mycar);

    printf("\n\nnewCar properties\n");
    printf("----------------------\n");
    printf("Color = %s\n", devcar.color);
    printf("Max Speed = %.2f\n", devcar.maxspeed);
    printf("Weight = %.2f\n", devcar.weight);
    printf("Fuel Tank = %.2f\n", devcar.fueltank);
    printf("Car type = %d\n", devcar.cartype);

    return 0;
}