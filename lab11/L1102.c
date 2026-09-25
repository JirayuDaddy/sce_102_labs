#include <stdio.h>
#include <string.h>

struct car {
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

void printCar(const char *title, struct car c) {
    printf("%s\n", title);
    printf("---------------\n");
    printf("Color = %s\n", c.color);
    printf("Max Speed = %.2f\n", c.maxSpeed);
    printf("Weight = %.2f\n", c.weight);
    printf("Fuel Tank = %.2f\n", c.fuelTank);
    printf("Car Type = %d\n", c.carType);
    printf("\n");
}

struct car devCar(struct car inCar) {
    struct car outCar;

    outCar.maxSpeed = inCar.maxSpeed + 20.0f;
    outCar.weight = inCar.weight + 50.0f;
    outCar.fuelTank = inCar.fuelTank + 10.0f;
    outCar.carType = inCar.carType;
    strcpy(outCar.color, inCar.color);

    return outCar;
}

int main(void) {
    struct car myCar = {"Blue", 162.5f, 985.36f, 40.0f, 1};
    struct car newCar;

    printCar("myCar properties", myCar);
    newCar = devCar(myCar);
    printCar("newCar properties", newCar);

    return 0;
}
