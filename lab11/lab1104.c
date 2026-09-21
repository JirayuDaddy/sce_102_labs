#include <stdio.h>

struct car {
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

int main() {
    struct car cars[3];
    int i;

    printf("Enter properties for 3 cars\n");
    printf("-------------------------------\n");

    for (i = 0; i < 3; i++) {
        printf("Car #%d\n", i + 1);
        printf("Enter color: ");
        scanf(" %49[^\n]", cars[i].color);
        printf("Enter max speed: ");
        scanf("%f", &cars[i].maxSpeed);
        printf("Enter weight: ");
        scanf("%f", &cars[i].weight);
        printf("Enter fuel tank: ");
        scanf("%f", &cars[i].fuelTank);
        printf("Car type: ");
        scanf("%d", &cars[i].carType);
        printf("\n");
    }

    printf("Entered properties\n");
    printf("-------------------------------\n");

    for (i = 0; i < 3; i++) {
        printf("Car #%d properties\n", i + 1);
        printf("---------------\n");
        printf("Color = %s\n", cars[i].color);
        printf("Max Speed = %.2f\n", cars[i].maxSpeed);
        printf("Weight = %.2f\n", cars[i].weight);
        printf("Fuel Tank = %.2f\n", cars[i].fuelTank);
        printf("Car Type = %d\n", cars[i].carType);
    }

    return 0;
}
