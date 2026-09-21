#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct car {
    char color[20];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

struct car makeCar(char engine, int type) {
    struct car newCar;
    const char colors[4][10] = {"Black", "White", "Red", "Blue"};

    if (engine == 'A' || engine == 'a') {
        newCar.maxSpeed = 160.0f;
        newCar.weight = 395.0f;
    } else if (engine == 'B' || engine == 'b') {
        newCar.maxSpeed = 110.0f;
        newCar.weight = 250.8f;
    } else if (engine == 'C' || engine == 'c') {
        newCar.maxSpeed = 184.63f;
        newCar.weight = 535.64f;
    } else {
        newCar.maxSpeed = 0.0f;
        newCar.weight = 0.0f;
    }

    if (type == 1) {
        newCar.weight += 529.8f;
        newCar.fuelTank = 44.32f;
    } else if (type == 2) {
        newCar.weight += 633.4f;
        newCar.fuelTank = 57.46f;
    } else {
        newCar.weight += 0.0f;
        newCar.fuelTank = 0.0f;
    }

    newCar.carType = type;
    strcpy(newCar.color, colors[rand() % 4]);

    return newCar;
}

int main() {
    char engine;
    int type, totalCars, displayCount, i;
    struct car assemblyLine[100];

    srand((unsigned)time(NULL));

    printf("Car Assembly Line\n");
    printf("-----------------------\n");
    printf("Select engine (A, B, or C): ");
    scanf(" %c", &engine);
    printf("Select car type (1 or 2): ");
    scanf(" %d", &type);
    printf("How many to make: ");
    scanf(" %d", &totalCars);

    if (totalCars > 100) {
        totalCars = 100;
    }

    if (totalCars < 0) {
        totalCars = 0;
    }

    for (i = 0; i < totalCars; i++) {
        assemblyLine[i] = makeCar(engine, type);
    }

    displayCount = (totalCars < 5) ? totalCars : 5;

    printf("\n");
    for (i = 0; i < displayCount; i++) {
        printf("Car #%d properties\n", i + 1);
        printf("---------------\n");
        printf("Color = %s\n", assemblyLine[i].color);
        printf("Max Speed = %.2f\n", assemblyLine[i].maxSpeed);
        printf("Weight = %.2f\n", assemblyLine[i].weight);
        printf("Fuel Tank = %.2f\n", assemblyLine[i].fuelTank);
        printf("Car Type = %d\n\n", assemblyLine[i].carType);
    }

    return 0;
}
