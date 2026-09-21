#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
    char colors[4][50] = {"Black", "White", "Red", "Blue"};
    struct car line[100];
    char engine;
    int carType;
    int amount;
    float engineSpeed;
    float engineWeight;
    float frameWeight;
    float tankSize;
    int show;
    int i;

    srand(time(NULL));

    printf("Car Assembly Line\n");
    printf("-----------------------\n");

    printf("Select engine (A, B, or C): ");
    scanf(" %c", &engine);

    printf("Select car type (1 or 2): ");
    scanf("%d", &carType);

    do
    {
        printf("How many to make: ");
        scanf("%d", &amount);
    } while (amount < 1 || amount > 100);

    if (engine == 'A')
    {
        engineSpeed = 160;
        engineWeight = 395;
    }
    else if (engine == 'B')
    {
        engineSpeed = 110;
        engineWeight = 250.8;
    }
    else
    {
        engineSpeed = 184.63;
        engineWeight = 535.64;
    }

    if (carType == 1)
    {
        frameWeight = 529.8;
        tankSize = 44.32;
    }
    else
    {
        frameWeight = 633.4;
        tankSize = 57.46;
    }

    for (i = 0; i < amount; i++)
    {
        strcpy(line[i].color, colors[rand() % 4]);
        line[i].maxSpeed = engineSpeed;
        line[i].weight = engineWeight + frameWeight;
        line[i].fuelTank = tankSize;
        line[i].carType = carType;
    }

    if (amount < 5)
    {
        show = amount;
    }
    else
    {
        show = 5;
    }

    for (i = 0; i < show; i++)
    {
        printf("\n");
        printf("Car #%d properties\n", i + 1);
        printf("---------------\n");
        printf("Color = %s\n", line[i].color);
        printf("Max Speed = %.2f\n", line[i].maxSpeed);
        printf("Weight = %.2f\n", line[i].weight);
        printf("Fuel Tank = %.2f\n", line[i].fuelTank);
        printf("Car Type = %d\n", line[i].carType);
    }

    return 0;
}