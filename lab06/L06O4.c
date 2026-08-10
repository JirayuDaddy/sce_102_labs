#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int threeDices(int x){
    srand(time(NULL));
    return rand() % 15 + 3;;
}
int main() {
    int x,y,w;
    printf("Sic Bo Simuulator");
    printf("Enter wallet amount: ");
    scanf("%d",w);
    printf("Place your bet: ");
}