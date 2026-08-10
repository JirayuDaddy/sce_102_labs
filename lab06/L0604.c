#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <time.h>

int threeDices_a(int x) {
    int d1 = rand()%6+1 ;
    int d2 = rand()%6+1 ;
    int d3 = rand()%6+1 ; 
    return d1 + d2 + d3 ;
}
int main () {

    int x,wallet ; 
    char S ;
    srand(time(NULL));

    printf("Sic Bo Simulator");
    printf("\n");
    printf("Enter wall amount : ");
    scanf("%d",&wallet);
    printf("\n");
    printf("Place your bet : %d\n",wallet);
    printf("High 'H' (11-18) or Low 'L' (3-10): \n");
    scanf("%c",&S);
    printf("threeDices_a %d \n",threeDices_a(x));








}