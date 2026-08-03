#include <stdio.h>

int main(){
    float num,i=0;
    printf("Starting the engine\n");
    printf("Enter the acceleration value (m/s^2): ");
    scanf("%f",&num);
    while(num*(i-1) <= 20){
        printf("Current speed at t=%.0f is %.3f m/s\n",i,num*i);
        i++;
    }
    return 0;
}