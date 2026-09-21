#include <stdio.h>
#include <string.h>

struct car {
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

struct car devCar(struct car inCar) {
    struct car outCar;

    outCar.maxSpeed = inCar.maxSpeed + 20;
    outCar.weight = inCar.weight + 50;
    outCar.fuelTank = inCar.fuelTank + 10;
    outCar.carType = inCar.carType;
    strcpy(outCar.color, inCar.color);

    return outCar;
}

void printCar(char title[], struct car c) {
    printf("%s properties\n", title);
    printf("---------------\n");
    printf("Color = %s\n", c.color);
    printf("Max Speed = %.2f\n", c.maxSpeed);
    printf("Weight = %.2f\n", c.weight);
    printf("Fuel Tank = %.2f\n", c.fuelTank);
    printf("Car Type = %d\n", c.carType);
}

int main() {
    struct car myCar;
    struct car newCar;

    strcpy(myCar.color, "Blue");
    myCar.maxSpeed = 162.5;
    myCar.weight = 985.36;
    myCar.fuelTank = 40;
    myCar.carType = 1;

    newCar = devCar(myCar);

    printCar("myCar", myCar);
    printf("\n\n");
    printCar("newCar", newCar);

    return 0;
}