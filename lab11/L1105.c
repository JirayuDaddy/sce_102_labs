#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX_CARS 100
struct Car {
    char color[20];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};
void printCar(int index, struct Car car) {
    printf("Car #%d properties\n", index);
    printf("---------------\n");
    printf("Color = %s\n", car.color);
    printf("Max Speed = %.2f\n", car.maxSpeed);
    printf("Weight = %.2f\n", car.weight);
    printf("Fuel Tank = %.2f\n", car.fuelTank);
    printf("Car Type = %d\n\n", car.carType);
}
int main(void) {
    struct Car assembly[MAX_CARS];
    char engine;
    int carType;
    int totalCars;
    int i;
    int displayCount;
    char colors[4][10] = {"Black", "White", "Red", "Blue"};
    srand((unsigned int)time(NULL));
    printf("Car Assembly Line\n");
    printf("-----------------------\n\n");
    printf("Select engine (A, B, or C): ");
    scanf(" %c", &engine);
    printf("Select car type (1 or 2): ");
    scanf(" %d", &carType);
    printf("How many to make: ");
    scanf(" %d", &totalCars);
    if (totalCars < 1 || totalCars > MAX_CARS) {
        printf("Invalid number of cars.\n");
        return 1;}
    if (engine == 'A' || engine == 'a') {
        for (i = 0; i < totalCars; i++) {
            assembly[i].maxSpeed = 160.0f;
            assembly[i].weight = 395.0f;
            assembly[i].carType = carType;
            assembly[i].fuelTank = (carType == 1) ? 44.32f : 57.46f;
            strcpy(assembly[i].color, colors[rand() % 4]);
            assembly[i].weight += (carType == 1) ? 529.8f : 633.4f;}
    } else if (engine == 'B' || engine == 'b') {
        for (i = 0; i < totalCars; i++) {
            assembly[i].maxSpeed = 110.0f;
            assembly[i].weight = 250.8f;
            assembly[i].carType = carType;
            assembly[i].fuelTank = (carType == 1) ? 44.32f : 57.46f;
            strcpy(assembly[i].color, colors[rand() % 4]);
            assembly[i].weight += (carType == 1) ? 529.8f : 633.4f;}
    } else if (engine == 'C' || engine == 'c') {
        for (i = 0; i < totalCars; i++) {
            assembly[i].maxSpeed = 184.63f;
            assembly[i].weight = 535.64f;
            assembly[i].carType = carType;
            assembly[i].fuelTank = (carType == 1) ? 44.32f : 57.46f;
            strcpy(assembly[i].color, colors[rand() % 4]);
            assembly[i].weight += (carType == 1) ? 529.8f : 633.4f;}
    } else {
        printf("Invalid engine type.\n");
        return 1;}
    if (totalCars >= 5) {
        displayCount = 5;
    } else {
        displayCount = totalCars;}
    printf("\n");
    for (i = 0; i < displayCount; i++) {
        printCar(i + 1, assembly[i]);}
    return 0;}