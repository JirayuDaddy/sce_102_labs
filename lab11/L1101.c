#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct car {
    char color[50] ;
    float maxspeed ;
    float weight ;
    float fueltank ; 
    int carType ;
};

int main() {

    struct car myCar ;

    strcpy(myCar.color, "Blue");
    myCar.maxspeed = 162.5;
    myCar.weight = 985.36;
    myCar.fueltank = 40;
    myCar.carType = 1;

    printf("myCar properties");
    printf("\n----------------\n");
    printf("Color = %s\n",myCar.color);
    printf("Max Speed = %.2f\n",myCar.maxspeed);
    printf("Weight = %.2f\n",myCar.weight);
    printf("Feul Tank = %.2f\n",myCar.fueltank);
    printf("Car Type = %d\n",myCar.carType);

    return 0;

}