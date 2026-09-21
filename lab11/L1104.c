#include <stdio.h>

struct car {
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

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
    struct car cars[3];
    char title[20];
    int i;

    printf("Enter properties for 3 cars\n");
    printf("-------------------------------\n");

    for (i = 0; i < 3; i++) {
        printf("Car #%d\n", i + 1);
        printf("Enter color: ");
        scanf("%s", cars[i].color);
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
        sprintf(title, "Car #%d", i + 1);
        printCar(title, cars[i]);
    }

    return 0;
}