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

int main() {
    struct car myCar = {
        "Blue",
        162.5f,
        985.36f,
        40.0f,
        1
    };

    struct car newCar = devCar(myCar);

    printf("devCar properties\n");
    printf("-------------\n");
    printf("Color = %s\n", newCar.color);
    printf("Max Speed = %.2f\n", newCar.maxSpeed);
    printf("Weight = %.2f\n", newCar.weight);
    printf("Fuel Tank = %.2f\n", newCar.fuelTank);
    printf("Car Type = %d\n", newCar.carType);

    return 0;
}