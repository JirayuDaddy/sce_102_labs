#include <stdio.h>
#include <string.h>
struct car {
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};
void printCar(const char *label, struct car c) {
    printf("%s\n", label);
    printf("---------------\n");
    printf("Color = %s\n", c.color);
    printf("Max Speed = %.2f\n", c.maxSpeed);
    printf("Weight = %.2f\n", c.weight);
    printf("Fuel Tank = %.2f\n", c.fuelTank);
    printf("Car Type = %d\n", c.carType);
    printf("\n");
}
int main(void) {
    struct car myCar = {"Blue", 162.5f, 985.36f, 40.0f, 1};
    struct car *p;
    printCar("myCar properties", myCar);
    p = &myCar;
    p->weight = 1234.5f;
    p->maxSpeed = 234.5f;
    strcpy(p->color, "Bronze");
    printCar("myCar properties", myCar);
    return 0;
}