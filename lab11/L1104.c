#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

int main() {
    struct Car cars[3];

    printf("Enter properties\n");
    printf("for 3 cars\n\n");

    for (int i = 0; i < 3; i++) {
        printf("-------------------------------\n\n");
        printf("Car #%d\n\n", i + 1);

        printf("Enter color: ");
        scanf("%s", cars[i].color);

        printf("\nEnter max speed: ");
        scanf("%f", &cars[i].maxSpeed);

        printf("\nEnter weight: ");
        scanf("%f", &cars[i].weight);

        printf("\nEnter fuel tank: ");
        scanf("%f", &cars[i].fuelTank);

        printf("\nCar type: ");
        scanf("%d", &cars[i].carType);

        printf("\n");
    }

    printf("Entered properties\n\n");
    printf("-------------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("\nCar #%d properties\n", i + 1);
        printf("---------------\n\n");

        printf("Color = %s\n", cars[i].color);
        printf("Max Speed = %.2f\n", cars[i].maxSpeed);
        printf("Weight = %.2f\n", cars[i].weight);
        printf("Fuel Tank = %.2f\n", cars[i].fuelTank);
        printf("Car Type = %d\n", cars[i].carType);
    }

    return 0;
}
