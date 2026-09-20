#include <stdio.h>
#include <string.h> 

struct car
{
    char color [50];
    float maxspeed;
    float weight;
    float fueltank;
    int cartype;
};

int main ()
{
    struct car mycar;
    struct car *p = &mycar;
    strcpy(mycar.color, "blue");
    mycar.maxspeed = 162.5;
    mycar.weight = 985.36;
    mycar.fueltank = 40;
    mycar.cartype = 1; 

    printf("myCar properties\n");
    printf("----------------------\n");
    printf("Color = %s\n", mycar.color);
    printf("Max Speed = %.2f\n", mycar.maxspeed);
    printf("Weight = %.2f\n", mycar.weight);
    printf("Fuel Tank = %.2f\n", mycar.fueltank);
    printf("Car type = %d", mycar.cartype);

    strcpy(p->color, "Bronze");
    p->weight = 1234.5;
    p->maxspeed = 234.5; 

    printf("\n\nmyCar properties\n");
    printf("----------------------\n");
    printf("Color = %s\n", mycar.color);
    printf("Max Speed = %.2f\n", mycar.maxspeed);
    printf("Weight = %.2f\n", mycar.weight);
    printf("Fuel Tank = %.2f\n", mycar.fueltank);
    printf("Car type = %d", mycar.cartype);
    
    return 0;
}
