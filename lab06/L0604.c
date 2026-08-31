#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int threeDices1 (int x){
    int D1 = rand()%6+1;
    int D2 = rand()%6+1;
    int D3 = rand()%6+1;
return D1+D2+D3;
}

int main(){
    int x ,wallet;
    char H,L;
    srand(time(NULL));
    printf("Sic Bo Similator");
    printf("\n");
    printf("Enter wall amount : ");
    scanf("%d",&wallet);
printf("\n");


}