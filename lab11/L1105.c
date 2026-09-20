#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct engine
{
    float max_speed;
    float engine_weight;
}
engine_A = {160, 395},
engin_B = {110, 250.8},
engin_C = {184.63, 535.64};

struct cartype
{
    float frame_weight;
    float fueltank;
}
cartype_one = {529.8, 44.32},
cartype_two = {633.4, 57.46};

int main()
{
    char engine;
    struct engine chosen_engine;
    struct cartype chosen_type;
    int choice_cartype;
    int how_many;
    const char *color[4] = {"Black", "White", "Red", "Blue"};

    printf("Car Assembly Line\n");
    printf("------------------\n");
    printf("Select engine (A, B, or C): ");
    scanf(" %c", &engine);
    printf("Select car type (1 or 2): ");
    scanf("%d", &choice_cartype);
    printf("How many to make: ");
    scanf("%d", &how_many);

    if(engine == 'A')
    {
        chosen_engine = engine_A;
    }
    else if(engine == 'B')
    {
        chosen_engine = engin_B;
    }
    else if(engine == 'C')
    {
        chosen_engine = engin_C;
    }
    else
    {
        printf("Invalid engine\n");
        return 1;
    }

    if(choice_cartype == 1)
    {
        chosen_type = cartype_one;
    }
    else if(choice_cartype == 2)
    {
        chosen_type = cartype_two;
    }
    else
    {
        printf("Invalid car type\n");
        return 1;
    }

    srand(time(NULL));

    int show = (how_many >= 5) ? 5 : how_many;

    for(int i = 0; i < show; i++)
    {
        printf("\nCar #%d properties\n", i + 1);
        printf("------------------\n");
        int j = rand() % 4;
        printf("Color = %s\n", color[j]);
        printf("Max Speed = %.2f\n", chosen_engine.max_speed);
        printf("Weight = %.2f\n", chosen_engine.engine_weight + chosen_type.frame_weight);
        printf("Fuel Tank = %.2f\n", chosen_type.fueltank);
    }

    return 0;
}