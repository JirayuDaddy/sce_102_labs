#include <stdio.h>
#include <string.h>

struct car{
char color[50];
float maxSpeed;
float weight;
float fuelTank;
int carType;
};

int main(){
    struct car myCar;
    strcpy(myCar.color,"Blue");
    myCar.maxSpeed = 162.50;
    myCar.weight = 985.36;
    myCar.fuelTank = 40;
    myCar.carType = 1;
    printf("myCar properties\n");
    printf("---------------\n");
    printf("%s\n",myCar.color);
    printf("%.2f\n",myCar.maxSpeed);
    printf("%.2f\n",myCar.weight);
    printf("%.2f\n",myCar.fuelTank);
    printf("%d\n",myCar.carType);

    struct car *p = &myCar;
    strcpy(p->color, "Bronze");
    p->maxSpeed = 234.5;
    p->weight = 1234.5;
    printf("myCar properties\n");
    printf("----------------\n");
    printf("Color = %s\n", myCar.color);
    printf("Max Speed = %.2f\n", myCar.maxSpeed);
    printf("Weight = %.2f\n", myCar.weight);
    printf("Fuel Tank = %.2f\n", myCar.fuelTank);
    printf("Car Type = %d\n", myCar.carType);
    return 0;
}