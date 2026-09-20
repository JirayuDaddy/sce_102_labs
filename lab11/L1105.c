#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/* Lab 11 - L1105: Car Assembly Line */
/* Select engine (A/B/C), car type (1/2), quantity (max 100) */
/* Cars get random color from Black, White, Red, Blue */
/* Display all if < 5, first 5 if >= 5 */

struct car {
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

int main() {
    char engine;
    int carType;
    int quantity;
    int i, displayCount;
    float engineMaxSpeed, engineWeight;
    float typeWeight, typeFuelTank;
    struct car cars[100];
    char *colors[] = {"Black", "White", "Red", "Blue"};

    srand(time(NULL));

    printf("Car Assembly Line\n");
    printf("----------------------\n");
    printf("Select engine (A, B, or C): ");
    scanf(" %c", &engine);
    printf("Select car type (1 or 2): ");
    scanf("%d", &carType);
    printf("How many to make: ");
    scanf("%d", &quantity);

    /* Determine engine specs */
    if (engine == 'A') {
        engineMaxSpeed = 160;
        engineWeight = 395;
    } else if (engine == 'B') {
        engineMaxSpeed = 110;
        engineWeight = 250.8;
    } else {
        engineMaxSpeed = 184.63;
        engineWeight = 535.64;
    }

    /* Determine car type specs */
    if (carType == 1) {
        typeWeight = 529.8;
        typeFuelTank = 44.32;
    } else {
        typeWeight = 633.4;
        typeFuelTank = 57.46;
    }

    /* Produce cars */
    for (i = 0; i < quantity; i++) {
        strcpy(cars[i].color, colors[rand() % 4]);
        cars[i].maxSpeed = engineMaxSpeed;
        cars[i].weight = engineWeight + typeWeight;
        cars[i].fuelTank = typeFuelTank;
        cars[i].carType = carType;
    }

    /* Determine how many to display */
    if (quantity < 5) {
        displayCount = quantity;
    } else {
        displayCount = 5;
    }

    /* Display cars */
    for (i = 0; i < displayCount; i++) {
        printf("Car #%d properties\n", i + 1);
        printf("--------------\n");
        printf("Color = %s\n", cars[i].color);
        printf("Max Speed = %.2f\n", cars[i].maxSpeed);
        printf("Weight = %.2f\n", cars[i].weight);
        printf("Fuel Tank = %.2f\n", cars[i].fuelTank);
        printf("Car Type = %d\n", cars[i].carType);
    }

    return 0;
}
