#include <stdio.h>
#include <string.h>

struct car{
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

int main() {
    struct car cars[3];
    printf("Enter properties for 3 cars\n");
    printf("-------------------------------");
    for(int i=0;i<3;i++){
    printf("\nCar #%d\n",i+1);
    printf("Enter color = ");
    scanf("%s",cars[i].color);
    printf("Enter maxSpeed = ");
    scanf("%f",&cars[i].maxSpeed);
    printf("Enter weight = ");
    scanf("%f",&cars[i].weight);
    printf("Enter fuel tank = ");
    scanf("%f",&cars[i].fuelTank);
    printf("Car type = ");
    scanf("%d",&cars[i].carType);
    }
    printf("\nEntered properties\n");
    printf("-------------------------------");
    for(int i=0;i<3;i++){
    printf("\nCar #%d properties\n",i+1);
    printf("---------------\n");
    printf("Color = %s\n",cars[i].color);
    printf("MaxSpeed = %.2f\n",cars[i].maxSpeed);
    printf("Weight = %.2f\n",cars[i].weight);
    printf("Fuel Tank = %.2f\n",cars[i].fuelTank);
    printf("Car Type = %d",cars[i].carType);
    }
    return 0;
}