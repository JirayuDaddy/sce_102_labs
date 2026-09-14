#include <stdio.h>

<<<<<<< HEAD
float speedDistance(float speed, int *time) {
    float distance = speed * (*time); 
    *time += 3;                       
    return distance;
}

int main() {
    float enea1;
    int ene2 = 1;

    printf("Distance calculator\n-------------------\n");
    for (int ene3 = 1; ene3 <= 3; ene3++) {
        printf("Enter speed: ");
        scanf("%f", &enea1);
        float dist = speedDistance(enea1, &ene2);
        printf("step %d => distance %.2f, time %d\n", ene3, dist, ene2);
    }

    return 0;
} 
=======
float speedDistance(float speed, int *time)
{
float distance = speed * (*time);
*time = *time + 3;
return distance;
}
int main(){
    int time = 1;
    float speed, distance;
    int i;

    printf("Distance calculator\n");
    printf("-----------------------\n");

    for(i=1,i<3,i++){
        printf("Enter speed: ");
        scanf("%.2f",&speed);
        distance = speedDistance(speed,&time);
        printf("step %d => distance %.2f, time%d\n",i, distance, time);
    }
    return 0;
}
>>>>>>> e96c5446dfea625192a6a2371622332869bb1cc4
