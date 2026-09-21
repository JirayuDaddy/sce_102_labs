#include <stdio.h>
#include <string.h>

struct car{
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
    char color[50];
};

int main()
{    
    struct car arr_car[3];
    printf("Enter properties for 3 cars\n");
    printf("-------------------\n");
    for(int i = 0 ; i<=2 ; i++)
    {
        printf("Car #%d\n",i+1);
        printf("Enter color : ");
        scanf("%s",&arr_car[i].color);
        printf("Enter max speed : ");
        scanf("%f",&arr_car[i].maxSpeed);
        printf("Enter weight : ");
        scanf("%f",&arr_car[i].weight);
        printf("Enter fuel tank : ");
        scanf("%f",&arr_car[i].fuelTank);
        printf("Car type : ");
        scanf("%d",&arr_car[i].carType);
    }
    printf("\nEntered properties");
    printf("\n-------------------");
    for(int i = 0 ; i<=2 ; i++)
    {
        printf("\nCar #%d properties\n",i+1);
        printf("Max Speed = %.2f\n",arr_car[i].maxSpeed);
        printf("Weight = %.2f\n",arr_car[i].weight);
        printf("Fuel tank = %.2f\n",arr_car[i].fuelTank);
        printf("Car type : %d\n",arr_car[i].carType);
    }
    return 0;
}