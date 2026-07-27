#include <stdio.h>
#include <stdlib.h>

int main(){
    int x=0;
    printf("Available parts list\n48. Radiator 240\n61. X43 Alternator\n99. B33 Batery\n\nSelect the part to inspect: ");
    scanf("%d",&x);
    switch(x){
        case 48:
            printf("\nRadiator 240 selected");
            break;
        case 61:
            printf("\nX43 Alternator selected");
            break;
        case 99:
            printf("\nB33 Battery selected");
            break;
        default:
            printf("Error in part selection");
    }
    return 0;
}