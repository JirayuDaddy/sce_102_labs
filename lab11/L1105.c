#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

struct input
{
    char engine;
    int type;
    int quantity;
};

struct car 
{
    float maxSpeed;
    float weight;
    float totalweight;
    float fuelTank;
    char color[50];
    int type;
    float carframe;
};

void DisplayingCar(struct input Userinput,struct car *arr_car);
void BuildingCar(struct input Userinput,struct car *arr_car);

int main()
{
    struct input Userinput;
    printf("Car Assembly Line");
    printf("\n---------------");
    printf("\nSelect engine (A, B, or C) : ");
    scanf(" %c",&Userinput.engine);
    printf("Select car type (1 or 2) : ");
    scanf("%d",&Userinput.type);
    printf("How many to make : ");
    scanf("%d",&Userinput.quantity);
    struct car arr_car[Userinput.quantity];
    BuildingCar(Userinput,arr_car);
    DisplayingCar(Userinput,arr_car);
    return 0;
}

void DisplayingCar(struct input Userinput,struct car *arr_car)
{   
    int howmanycardisplayed = 0;
    int limit = (Userinput.quantity <4) ? Userinput.quantity : 4;
    for(int i = 0 ; i <= limit ; i++ )
    {
        printf("Car #%d properties\n",i+1);
        printf("-------------------\n");
        printf("Color = %s\n",arr_car[i].color);
        printf("Max Speed = %.2f\n",arr_car[i].maxSpeed);
        printf("Weight = %.2f\n",arr_car[i].totalweight);
        printf("Fuel Tank = %.2f\n",arr_car[i].fuelTank);
        printf("Car Type = %d\n\n",arr_car[i].type);
    }
}

void BuildingCar(struct input Userinput,struct car *arr_car)
{   
    for(int i = 0; i <= Userinput.quantity-1 ; i++)
    {
        if(Userinput.engine == 'A')
        {
            arr_car[i].maxSpeed = 160;
            arr_car[i].weight = 395;
        }
        else if(Userinput.engine == 'B')
        {
            arr_car[i].maxSpeed = 110;
            arr_car[i].weight = 250.8;
        }
        else if(Userinput.engine == 'C')
        {
            arr_car[i].maxSpeed = 184.63;
            arr_car[i].weight = 535.64;
        }
        if(Userinput.type == 1 )
        {
            arr_car[i].type = 1;
            arr_car[i].carframe = 529.8;
            arr_car[i].fuelTank = 44.32;
        }
        if(Userinput.type == 2 )
        {
            arr_car[i].type = 2;
            arr_car[i].carframe = 633.44;
            arr_car[i].fuelTank = 57.46;
        }
        arr_car[i].totalweight = arr_car[i].weight + arr_car[i].carframe;
        srand(time(NULL));
        int random_color = rand() % 4 + 1;
        if (random_color == 1)
        {
            strcpy(arr_car[i].color,"Black");
        }
        else if (random_color == 2)
        {
            strcpy(arr_car[i].color,"White");
        }
        else if (random_color == 3)
        {
            strcpy(arr_car[i].color,"Red");
        }
        else if (random_color == 4)
        {
            strcpy(arr_car[i].color,"Blue");
        }
    }
}