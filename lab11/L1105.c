#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct car
{
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

int main()
{
    struct car cars[100];

    char engine;
    int type;
    int amount;
    int i;
    int randomColor;
    int showAmount;

    float engineSpeed;
    float engineWeight;
    float bodyWeight;
    float tankSize;

    char colors[4][50] =
    {
        "Black",
        "White",
        "Red",
        "Blue"
    };

    srand(time(NULL));

    printf("Car Assembly Line\n");
    printf("-----------------------\n");

    printf("Select engine (A, B, or C): ");
    scanf(" %c", &engine);

    printf("Select car type (1 or 2): ");
    scanf("%d", &type);

    printf("How many to make: ");
    scanf("%d", &amount);

    if(amount < 1 || amount > 100)
    {
        printf("Invalid amount\n");
        return 0;
    }


    if(engine == 'A' || engine == 'a')
    {
        engineSpeed = 160;
        engineWeight = 395;
    }
    else if(engine == 'B' || engine == 'b')
    {
        engineSpeed = 110;
        engineWeight = 250.8;
    }
    else if(engine == 'C' || engine == 'c')
    {
        engineSpeed = 184.63;
        engineWeight = 535.64;
    }
    else
    {
        printf("Invalid engine\n");
        return 0;
    }


    if(type == 1)
    {
        bodyWeight = 529.8;
        tankSize = 44.32;
    }
    else if(type == 2)
    {
        bodyWeight = 633.4;
        tankSize = 57.46;
    }
    else
    {
        printf("Invalid car type\n");
        return 0;
    }


    for(i = 0; i < amount; i++)
    {
        cars[i].maxSpeed = engineSpeed;

        cars[i].weight =
            engineWeight + bodyWeight;

        cars[i].fuelTank = tankSize;

        cars[i].carType = type;

        randomColor = rand() % 4;

        strcpy(cars[i].color,
               colors[randomColor]);
    }


    if(amount < 5)
        showAmount = amount;
    else
        showAmount = 5;

    for(i = 0; i < showAmount; i++)
    {
        printf("Car #%d properties\n", i + 1);
        printf("---------------\n");

        printf("Color = %s\n",
               cars[i].color);

        printf("Max Speed = %.2f\n",
               cars[i].maxSpeed);

        printf("Weight = %.2f\n",
               cars[i].weight);

        printf("Fuel Tank = %.2f\n",
               cars[i].fuelTank);

        printf("Car Type = %d\n",
               cars[i].carType);
    }

    return 0;
}