#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(void){
    float x=0,y=0;
    printf("Enter the number for y: ");
    scanf("%f",&y);
    printf("\nResults");
    printf("\nx from eq.1 = %.2f",sqrt(pow(y,2)+45));
    printf("\nx from eq.2 = %.2f",pow(y,2)+3*y+1);
    return 0;
}