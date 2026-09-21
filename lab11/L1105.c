#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

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
    struct car line[100];
    char *colors[4] = {"Black", "White", "Red", "Blue"};
    char engine, title[20];
    int type, n, show, i;
    float engineSpeed, engineWeight, frameWeight, tank;

    srand(time(NULL));

    printf("Car Assembly Line\n");
    printf("------------------------\n");

    printf("Select engine (A, B, or C): ");
    scanf(" %c", &engine);
    engine = toupper(engine);

    printf("Select car type (1 or 2): ");
    scanf("%d", &type);

    printf("How many to make: ");
    scanf("%d", &n);

    if (engine == 'A') {
        engineSpeed = 160;
        engineWeight = 395;
    } else if (engine == 'B') {
        engineSpeed = 110;
        engineWeight = 250.8;
    } else {
        engineSpeed = 184.63;
        engineWeight = 535.64;
    }

    if (type == 1) {
        frameWeight = 529.8;
        tank = 44.32;
    } else {
        frameWeight = 633.4;
        tank = 57.46;
    }

    for (i = 0; i < n; i++) {
        strcpy(line[i].color, colors[rand() % 4]);
        line[i].maxSpeed = engineSpeed;
        line[i].weight = engineWeight + frameWeight;
        line[i].fuelTank = tank;
        line[i].carType = type;
    }

    show = (n < 5) ? n : 5;

    for (i = 0; i < show; i++) {
        sprintf(title, "Car #%d", i + 1);
        printf("\n");
        printCar(title, line[i]);
    }

    return 0;
}