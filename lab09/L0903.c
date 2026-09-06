#include <stdio.h>
#include <stdlib.h>

float speedDistance(float speed, int *time)
{
        float Distance =  speed * (*time) ;
        *time+=3 ;
        return Distance ;
}
int main () {

    int step ;
    float speed , Distance ;
    int time=1 ;
    

    printf(" Distance calculator ");
    printf("\n-----------------------\n");
    for ( step = 0 ; step <= 3 ; step++ )
    {   
        printf(" Enter speed : ");
        scanf("%f",&speed);
        Distance = speedDistance(speed,&time) ;

        printf("step %d => distance %.2f, time %d\n",step + 1, Distance, time);

    }

    return 0; 

}