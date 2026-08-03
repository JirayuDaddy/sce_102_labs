#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t=0;
    float N;
    printf("Starting the engine");
    printf("Enter tne acceleration value (m/s^2): ");
    scanf("%f",&N);
    while(N*(t-1)<20){
        printf("Current speed at t=%d is %.3f m/s\n",t ,N*t);
        t++;
    }
    return 0;
}