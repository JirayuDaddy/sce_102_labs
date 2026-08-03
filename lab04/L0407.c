#include <stdio.h>
int main() {
    int Num ;
    printf("Select the part to inspect: ");
    scanf("%d",&Num);
    switch(Num){
        case 48:
        printf("Radiator 240");
        break;
        case 61:
        printf("X43 Alternator");
        break;
        case 99:
        printf("B33 Battery");
        break;
        default:
            printf("Error in part selection");
    }
    return 0;
}