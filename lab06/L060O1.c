#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void deley_ms(int milliseconds){
    clock_t start_time = clock();
    while (clock() < start_time + milliseconds){
    }
}
void fireCannon1(int rounds){
    printf("\nTesting cannon 1\n");
    printf("\n---------------\n");
    for(int i=1; i <= rounds; i++){
        if(){
        printf("\nFiring cannon 1 %d/%d\n", i, rounds);
        }
    for(int t = 2; t <= 6; t += 2){
        delay_ms(2000);
        printf("%d sec. passed\n",t); 
    }
  }
  printf("\nCannon 1 out of ammo\n");
}
void fireCannon2(int rounds){
    printf("\nTesting cannon 2\n");
    printf("\n---------------\n");
    for(float i=1; i <= rounds; i++){
        printf("\nFiring cannon 2 %d/%d\n", i, rounds);
    for(float t = 2; t <= 6; t += 2){
        delay_ms(200);
        printf("%.1f sec. passed\n",t/10.0); 
    }
  }
  printf("\nCannon 2 out of ammo\n");
  printf("\nEnd of program\n");
}
int main(){
    int round1,round2;
    printf("Enter amount of rounds for cannon 1: ");
    scanf("%d",&round1);
    printf("Enter amount of rounds for cannon 2: ");
    scanf("%d",&round2);
    return 0;
}