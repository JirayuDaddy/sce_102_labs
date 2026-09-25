#include <stdio.h>
#include <string.h>

struct car {
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

void printCar(int index, struct car c) {
    printf("Car #%d properties\n", index);
    printf("---------------\n");
    printf("Color = %s\n", c.color);
    printf("Max Speed = %.2f\n", c.maxSpeed);
    printf("Weight = %.2f\n", c.weight);
    printf("Fuel Tank = %.2f\n", c.fuelTank);
    printf("Car Type = %d\n", c.carType);
    printf("\n");
}

int main(void) {
    struct car cars[3];
    int i;

    printf("Enter properties for 3 cars\n");
    printf("-------------------------------\n");

    for (i = 0; i < 3; i++) {
        printf("Car #%d\n", i + 1);
        printf("Enter color: ");
        scanf("%s", cars[i].color);
        fflush(stdin);

        printf("Enter max speed: ");
        scanf("%f", &cars[i].maxSpeed);
        fflush(stdin);

        printf("Enter weight: ");
        scanf("%f", &cars[i].weight);
        fflush(stdin);

        printf("Enter fuel tank: ");
        scanf("%f", &cars[i].fuelTank);
        fflush(stdin);

        printf("Car type: ");
        scanf("%d", &cars[i].carType);
        fflush(stdin);
        printf("\n");
    }

    printf("Entered properties\n");
    printf("-------------------------------\n");

    for (i = 0; i < 3; i++) {
        printCar(i + 1, cars[i]);
    }

    return 0;
}
