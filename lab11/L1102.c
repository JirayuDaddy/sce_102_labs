#include <stdio.h>
#include <string.h>

struct car{
char color[50];
float maxSpeed;
float weight;
float fuelTank;
int carType;
};

struct car devCar(struct car inCar){
    struct car outCar;
    outCar.maxSpeed=inCar.maxSpeed+20; 
    outCar.weight=inCar.weight+50; 
    outCar.fuelTank=inCar.fuelTank+10; 
    outCar.carType=inCar.carType; 
    strcpy(outCar.color,inCar.color);
    return outCar;
}

int main(){
    struct car myCar;

    strcpy(myCar.color,"Blue");
    myCar.maxSpeed = 162.50;
    myCar.weight = 985.36;
    myCar.fuelTank = 40;
    myCar.carType = 1;
    
    printf("myCar properties\n");
    printf("---------------\n");
    printf("%s\n",myCar.color);
    printf("%.2f\n",myCar.maxSpeed);
    printf("%.2f\n",myCar.weight);
    printf("%.2f\n",myCar.fuelTank);
    printf("%d\n",myCar.carType);

    struct car newCar = devCar(myCar);
    printf("newCar properties\n");
    printf("---------------\n");
    printf("%s\n",newCar.color);
    printf("%.2f\n",newCar.maxSpeed);
    printf("%.2f\n",newCar.weight);
    printf("%.2f\n",newCar.fuelTank);
    printf("%d\n",newCar.carType);
    
    return 0;
}