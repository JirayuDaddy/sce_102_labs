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
    char engineChoice;
    int carTypeChoice;
    int numToMake;

    printf("Car Assembly Line\n");
    printf("-------------------\n");
    printf("Select engine (A, B, or C): ");
    scanf(" %c", &engineChoice);
    printf("Select car type (1 or 2): ");
    scanf("%d", &carTypeChoice);
    printf("How many to make: ");
    scanf("%d", &numToMake);
    printf("\n");

    float baseMaxSpeed = 0;
    if (engineChoice == 'A' || engineChoice == 'a') {
        baseMaxSpeed = 160.0;
    } else if (engineChoice == 'B' || engineChoice == 'b') {
        baseMaxSpeed = 110.0;
    } else if (engineChoice == 'C' || engineChoice == 'c') {
        baseMaxSpeed = 184.63;
    }

    float baseWeight = 0;
    float baseFuelTank = 0;
    if (carTypeChoice == 1) {
        if (engineChoice == 'A' || engineChoice == 'a') {
            baseWeight = 395.0;
        } else if (engineChoice == 'B' || engineChoice == 'b') {
            baseWeight = 250.8;
        } else if (engineChoice == 'C' || engineChoice == 'c') {
            baseWeight = 535.64;
        }
        baseFuelTank = 44.32;
    } else if (carTypeChoice == 2) {
        if (engineChoice == 'A' || engineChoice == 'a') {
            baseWeight = 529.8;
        } else if (engineChoice == 'B' || engineChoice == 'b') {
            baseWeight = 633.4;
        } else if (engineChoice == 'C' || engineChoice == 'c') {
            baseWeight = 1169.04;
        }
        baseFuelTank = 57.46;
    }

    char colors[4][20] = {"Blue", "White", "Red", "Black"};
    struct car cars[100];

    srand(time(NULL));
    for (int i = 0; i < numToMake && i < 100; i++) {
        cars[i].maxSpeed = baseMaxSpeed;
        cars[i].weight = baseWeight;
        cars[i].fuelTank = baseFuelTank;
        cars[i].carType = carTypeChoice;
        int colorIndex = rand() % 4;
        strcpy(cars[i].color, colors[colorIndex]);
    }

    int displayCount = numToMake;
    if (displayCount > 5) {
        displayCount = 5;
    }

    for (int i = 0; i < displayCount; i++) {
        printf("Car #%d properties\n", i + 1);
        printf("--------------------\n");
        printf("Color = %s\n", cars[i].color);
        printf("Max Speed = %.2f\n", cars[i].maxSpeed);
        printf("Weight = %.2f\n", cars[i].weight);
        printf("Fuel Tank = %.2f\n", cars[i].fuelTank);
        printf("Car Type = %d\n", cars[i].carType);

        if (i < displayCount - 1) {
            printf("\n");
        }
    }

    return 0;
}
