#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct car {
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

int main() {
    struct car cars[100];
    char engineChoice;
    int typeChoice, count;
    char colors[4][10] = {"Black", "White", "Red", "Blue"};

    srand(time(NULL));

    printf("Car Assembly Line\n");
    printf("-----------------\n");
    printf("Select engine (A, B, or C): ");
    scanf(" %c", &engineChoice);

    printf("Select car type (1 or 2): ");
    scanf("%d", &typeChoice);

    printf("How many to make: ");
    scanf("%d", &count);
    printf("\n");

    float baseMaxSpeed = 0;
    float engineWeight = 0;

    if (engineChoice == 'A' || engineChoice == 'a') {
        baseMaxSpeed = 160.0f;
        engineWeight = 395.0f;
    } else if (engineChoice == 'B' || engineChoice == 'b') {
        baseMaxSpeed = 110.0f;
        engineWeight = 250.8f;
    } else if (engineChoice == 'C' || engineChoice == 'c') {
        baseMaxSpeed = 184.63f;
        engineWeight = 535.64f;
    }

    float frameWeight = 0;
    float tankSize = 0;

    if (typeChoice == 1) {
        frameWeight = 529.8f;
        tankSize = 44.32f;
    } else if (typeChoice == 2) {
        frameWeight = 633.4f;
        tankSize = 57.46f;
    }

    for (int i = 0; i < count; i++) {
        cars[i].maxSpeed = baseMaxSpeed;
        cars[i].weight = engineWeight + frameWeight;
        cars[i].fuelTank = tankSize;
        cars[i].carType = typeChoice;

        int randomColorIndex = rand() % 4;
        strcpy(cars[i].color, colors[randomColorIndex]);
    }

    int displayCount = (count < 5) ? count : 5;

    for (int i = 0; i < displayCount; i++) {
        printf("Car #%d properties\n", i + 1);
        printf("-----------------\n");
        printf("Color = %s\n", cars[i].color);
        printf("Max Speed = %.2f\n", cars[i].maxSpeed);
        printf("Weight = %.2f\n", cars[i].weight);
        printf("Fuel Tank = %.2f\n", cars[i].fuelTank);
        printf("Car Type = %d\n\n", cars[i].carType);
    }

    return 0;
}