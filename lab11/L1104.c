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
    struct car cars[3];
    printf("Enter properties for 3 cars\n");
    printf("-----------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Car #%d\n",i+1);
        printf("Enter color: ");
        scanf("%s",cars[i].color);
        printf("Enter max speed: ");
        scanf("%f", &cars[i].maxSpeed);
        printf("Enter weight: ");
        scanf("%f", &cars[i].weight);
        printf("Enter fuel tank: ");
        scanf("%f", &cars[i].fuelTank);
        printf("Car type: ");
        scanf("%d", &cars[i].carType);
    }

    printf("Entered properties\n");
    printf("-----------------------------\n");
    for (int i = 0; i < 3; i++)
    {
    printf("Car #%d properties\n",i+1);
    printf("----------------\n");
    printf("%s\n",cars[i].color);
    printf("%.2f\n",cars[i].maxSpeed);
    printf("%.2f\n",cars[i].weight);
    printf("%.2f\n",cars[i].fuelTank);
    printf("%d\n",cars[i].carType);
    }
    return 0;
}