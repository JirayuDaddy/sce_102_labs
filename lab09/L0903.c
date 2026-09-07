#include <stdio.h>

float speedDistance(float speed, int *time)
{
<<<<<<< HEAD
    float distance = speed * (*time);
    *time += 3;
    return distance;
}

int main(void)
{
    float speed;
    float distance;
    int time = 1;
    int step;
=======
float distance = speed * (*time);
*time = *time + 3;
return distance;
}
int main(){
    int time = 1;
    float speed, distance;
    int i;
>>>>>>> ac860e7 (lab09 submission)

    printf("Distance calculator\n");
    printf("-----------------------\n");

<<<<<<< HEAD
    for (step = 1; step <= 3; step++) {
        printf("Enter speed: ");
        scanf("%f", &speed);
        distance = speedDistance(speed, &time);
        printf("step %d => distance %.2f, time %d\n",
               step, distance, time);
    }

    return 0;
}
=======
    for(i=1,i<3,i++){
        printf("Enter speed: ");
        scanf("%.2f",&speed);
        distance = speedDistance(speed,&time);
        printf("step %d => distance %.2f, time%d\n",i, distance, time);
    }
    return 0;
}
>>>>>>> ac860e7 (lab09 submission)
