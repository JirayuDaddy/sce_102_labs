#include <stdio.h>
#include <stdlib.h>

struct Car {
    char color[20];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

int main() {
    char engine;
    int carType, count;
    const char *colors[] = {"Black", "White", "Red", "Blue"};

    printf("Car Assembly Line\n");
    printf("---------------------\n");
    printf("Select engine (A, B, or C): ");
    scanf(" %c", &engine);
    printf("Select car type (1 or 2): ");
    scanf("%d", &carType);
    printf("How many to make: ");
    scanf("%d", &count);
    printf("\n");

    // กำหนดค่าเครื่องยนต์
    float engineSpeed = 0, engineWeight = 0;
    if (engine == 'A' || engine == 'a') {
        engineSpeed = 160.0;
        engineWeight = 395.0;
    } else if (engine == 'B' || engine == 'b') {
        engineSpeed = 110.0;
        engineWeight = 250.8;
    } else if (engine == 'C' || engine == 'c') {
        engineSpeed = 184.63;
        engineWeight = 535.64;
    }

    // กำหนดค่าชนิดรถยนต์
    float bodyWeight = 0, fuelTank = 0;
    if (carType == 1) {
        bodyWeight = 529.8;
        fuelTank = 44.32;
    } else if (carType == 2) {
        bodyWeight = 633.4;
        fuelTank = 57.46;
    }

    struct Car cars[100];
    int displayCount = (count < 5) ? count : 5;

    for (int i = 0; i < count; i++) {
        int colorIdx = rand() % 4;
        snprintf(cars[i].color, sizeof(cars[i].color), "%s", colors[colorIdx]);
        cars[i].maxSpeed = engineSpeed;
        cars[i].weight = engineWeight + bodyWeight;
        cars[i].fuelTank = fuelTank;
        cars[i].carType = carType;
    }

    // แสดงผลไม่เกิน 5 คันแรก
    for (int i = 0; i < displayCount; i++) {
        printf("Car #%d properties\n", i + 1);
        printf("-------------------\n");
        printf("Color = %s\n", cars[i].color);
        printf("Max Speed = %.2f\n", cars[i].maxSpeed);
        printf("Weight = %.2f\n", cars[i].weight);
        printf("Fuel Tank = %.2f\n", cars[i].fuelTank);
        printf("Car Type = %d\n\n", cars[i].carType);
    }

    return 0;
}