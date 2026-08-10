#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u = 0 , t = 0;
    float v,a;
    printf("Starting the engine");
    printf("Enter the acceleration value (m/s^2): ");
    scanf("%f" ,&a);
    
    while(1){
        v = u + a * t;
        printf("Current speed at t%d is %f m/s\n",t,v);
        if (v>=20)
            break;
        t++;
    }
    return 0;
}