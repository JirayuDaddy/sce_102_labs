#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Car
{
    char color[10];
    float maxspeed;
    float weight;
    float fueltank;
    int cartype;
};

int main()
{
    srand(time(NULL));
    char colors[4][10] = {"Black", "White", "Red", "Blue"};
    char engine;
    int type;
    int make;

    struct Car AllCar[100];

    float baseSpeed = 0, baseWieght = 0;
    float plusWeight = 0, tankSize = 0;

    printf("Car Assembly Line\n");
    printf("-----------------------\n");

    printf("Select engine (A, B, or C): ");
    scanf(" %c", &engine);

    if (engine == 'A')
    {
        baseSpeed = 160.0;
        baseWieght = 395.0;
    }
    else if (engine == 'B')
    {
        baseSpeed = 110.0;
        baseWieght = 250.8;
    }
    else if (engine == 'C')
    {
        baseSpeed = 184.63;
        baseWieght = 535.64;
    }

    printf("Select car type (1 or 2): ");
    scanf("%d", &type);

    if (type == 1)
    {
        plusWeight = 529.8;
        tankSize = 44.32;
    }
    else if (type == 2)
    {
        plusWeight = 633.4;
        tankSize = 57.46;
    }

    printf("How many to make: ");
    scanf("%d", &make);
    printf("\n");

    for (int i = 0; i < make; i++)
    {
        int RandColor = rand() % 4;
        strcpy(AllCar[i].color, colors[RandColor]);

        AllCar[i].maxspeed = baseSpeed;
        AllCar[i].weight = baseWieght + plusWeight;
        AllCar[i].fueltank = tankSize;
        AllCar[i].cartype = type;
    }

    int limit = make;
    if (make >= 5)
    {
        limit = 5;
    }

    for (int i = 0; i < limit; i++)
    {
        printf("Car #%d properties\n", i + 1);
        printf("---------------\n");
        printf("Color = %s\n", AllCar[i].color);
        printf("Max Speed = %.2f\n", AllCar[i].maxspeed);
        printf("Weight = %.2f\n", AllCar[i].weight);
        printf("Fuel Tank = %.2f\n", AllCar[i].fueltank);
        printf("Car Type = %d\n\n", AllCar[i].cartype);
    }
    return 0;
}
