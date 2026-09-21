#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct car
    {
        char color[50];
        float top_speed;
        float weight;
        float fuel_tank_capacity;
        int segment;
    };

    struct car my_car;
    strcpy(my_car.color, "Blue");
    my_car.top_speed = 162.5;
    my_car.weight = 985.36;
    my_car.fuel_tank_capacity = 40.0;
    my_car.segment = 1;

    struct dev_car
    {
        float top_speed;
        float weight;
        float fuel_tank_capacity;
        int segment;
    };

    printf("\nCar Information :\n");
    printf("Color : %s\n", my_car.color);
    printf("Top Speed : %.1f kph\n", my_car.top_speed);
    printf("Weight : %.2f kg\n", my_car.weight);
    printf("Fuel Tank Capacity : %.1f liters\n", my_car.fuel_tank_capacity);
    printf("Segment : %d\n\n", my_car.segment);

    struct dev_car modified_car;
    modified_car.top_speed = my_car.top_speed + 20;
    modified_car.weight = my_car.weight + 50;
    modified_car.fuel_tank_capacity = my_car.fuel_tank_capacity + 10;
    modified_car.segment = my_car.segment;

    printf("Modified Car Information :\n");
    printf("Color : %s\n", my_car.color);
    printf("Top Speed : %.1f kph\n", modified_car.top_speed);
    printf("Weight : %.2f kg\n", modified_car.weight);
    printf("Fuel Tank Capacity : %.1f liters\n", modified_car.fuel_tank_capacity);
    printf("Segment : %d\n\n", modified_car.segment);


    return 0;
}