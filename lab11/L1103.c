#include <stdio.h>
#include <string.h>

/* Lab 11 - L1103: Pointer to struct car */
/* Use pointer p to modify myCar's values */

struct car {
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

int main() {
    struct car myCar;
    struct car *p;

    strcpy(myCar.color, "Blue");
    myCar.maxSpeed = 162.5;
    myCar.weight = 985.36;
    myCar.fuelTank = 40;
    myCar.carType = 1;

    /* Print original values */
    printf("myCar properties\n");
    printf("--------------\n");
    printf("Color = %s\n", myCar.color);
    printf("Max Speed = %.2f\n", myCar.maxSpeed);
    printf("Weight = %.2f\n", myCar.weight);
    printf("Fuel Tank = %.2f\n", myCar.fuelTank);
    printf("Car Type = %d\n", myCar.carType);

    /* Use pointer p to change myCar's data */
    p = &myCar;
    p->maxSpeed = 234.5;
    p->weight = 1234.5;
    strcpy(p->color, "Bronze");

    /* Print modified values */
    printf("myCar properties\n");
    printf("--------------\n");
    printf("Color = %s\n", myCar.color);
    printf("Max Speed = %.2f\n", myCar.maxSpeed);
    printf("Weight = %.2f\n", myCar.weight);
    printf("Fuel Tank = %.2f\n", myCar.fuelTank);
    printf("Car Type = %d\n", myCar.carType);

    return 0;
}
