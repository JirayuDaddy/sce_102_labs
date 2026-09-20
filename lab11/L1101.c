#include <stdio.h>
#include <string.h>

struct car {
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

int main() {
    
    struct car myCar;
    
    strcpy(myCar.color, "Blue");
    myCar.maxSpeed = 162.5f;
    myCar.weight = 985.36f;
    myCar.fuelTank = 40.0f;
    myCar.carType = 1;
    
    printf("myCar properties\n");
    printf("--------------------\n");
    printf("Color = %s\n", myCar.color);
    printf("Max Speed = %.2f\n", myCar.maxSpeed);
    printf("Weight = %.2f\n", myCar.weight);
    printf("Fuel Tank = %.2f\n", myCar.fuelTank);
    printf("Car Type = %d\n", myCar.carType);
    
    return 0;
}
