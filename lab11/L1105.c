#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Car {
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int engine;
    int carType;
};

int main() {
    struct Car cars[100];

    int amount;
    int engine;
    int carType;
    int i;
    
    char colors[4][50] = {
        "Black",
        "White",
        "Red",
        "Blue"
    };

    srand(time(NULL));

    printf("Car Production Line\n");
    printf("-------------------------------\n\n");

    printf("Enter number of cars to produce (1-100): ");
    scanf("%d", &amount);

    if (amount < 1 || amount > 100) {
        printf("Invalid number of cars.\n");
        return 0;
    }

    printf("\nSelect Engine\n");
    printf("1. Engine A (Max Speed = 160, Weight = 395)\n");
    printf("2. Engine B (Max Speed = 110, Weight = 250.8)\n");
    printf("3. Engine C (Max Speed = 184.63, Weight = 535.64)\n");
    printf("Enter engine: ");
    scanf("%d", &engine);

    if (engine < 1 || engine > 3) {
        printf("Invalid engine.\n");
        return 0;
    }

    printf("\nSelect Car Type\n");
    printf("1. Type 1 (Frame Weight = 529.8, Fuel Tank = 44.32)\n");
    printf("2. Type 2 (Frame Weight = 633.4, Fuel Tank = 57.46)\n");
    printf("Enter car type: ");
    scanf("%d", &carType);

    if (carType < 1 || carType > 2) {
        printf("Invalid car type.\n");
        return 0;
    }

    for (i = 0; i < amount; i++) {

        int randomColor = rand() % 4;

        sprintf(cars[i].color, "%s", colors[randomColor]);

        cars[i].engine = engine;
        cars[i].carType = carType;

        if (engine == 1) {
            cars[i].maxSpeed = 160;
            cars[i].weight = 395;
        }
        else if (engine == 2) {
            cars[i].maxSpeed = 110;
            cars[i].weight = 250.8;
        }
        else {
            cars[i].maxSpeed = 184.63;
            cars[i].weight = 535.64;
        }

        if (carType == 1) {
            cars[i].weight += 529.8;
            cars[i].fuelTank = 44.32;
        }
        else {
            cars[i].weight += 633.4;
            cars[i].fuelTank = 57.46;
        }
    }

    printf("\n\nEntered properties\n");
    printf("-------------------------------\n");

    int displayAmount;

    if (amount < 5) {
        displayAmount = amount;
    }
    else {
        displayAmount = 5;
    }

    for (i = 0; i < displayAmount; i++) {
        printf("\nCar #%d\n", i + 1);
        printf("---------------\n");
        printf("Color = %s\n", cars[i].color);
        printf("Max Speed = %.2f\n", cars[i].maxSpeed);
        printf("Weight = %.2f\n", cars[i].weight);
        printf("Fuel Tank = %.2f\n", cars[i].fuelTank);
        printf("Engine = %d\n", cars[i].engine);
        printf("Car Type = %d\n", cars[i].carType);
    }

    return 0;
}