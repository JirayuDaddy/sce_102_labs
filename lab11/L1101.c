#include <stdio.h>
struct car {
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};
void printCar(struct car c) {
    printf("myCar properties\n");
    printf("---------------\n");
    printf("Color = %s\n", c.color);
    printf("Max Speed = %.2f\n", c.maxSpeed);
    printf("Weight = %.2f\n", c.weight);
    printf("Fuel Tank = %.2f\n", c.fuelTank);
    printf("Car Type = %d\n", c.carType);
}
int main(void) {
    struct car myCar = {"Blue", 162.5f, 985.36f, 40.0f, 1};

    printCar(myCar);
    return 0;
}
