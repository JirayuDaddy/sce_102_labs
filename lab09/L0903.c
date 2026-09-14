#include <stdio.h>
float speedDistance(float speed, int *time)
{
    float distance = speed * *time;
    *time = *time + 3;
    return distance; 
}
int main ()
{
    float speed , distance;
    int time = 1;

    printf("Distance calculator\n");
    printf("------------------------\n");
    
    for(int i = 0 ; i < 3 ; i++)
    {
    printf("Enter speed: ");
    scanf("%f", &speed);
    distance = speedDistance(speed , &time);
    printf("step %d => distance %.2f, time %d\n", i + 1 , distance , time);
    }
    
    return 0;
}