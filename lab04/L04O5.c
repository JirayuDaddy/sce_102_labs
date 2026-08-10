#include <stdio.h>
#include <stdlib.h>

    int main(){

        int num;

        printf("Available parts list");
        printf("\n48. Radiator 240");
        printf("\n61. X43 Alternator");
        printf("\n99. B33 Battery");

        printf("\n\nSelect the part to inspect: ");
        scanf("%d", &num);
        switch(num){
            case 48:
                printf("\n48. Radiator 240");
                break;
            case 61:
                printf("61. X43 Alternator");
                break;
            case 99:
                printf("99. B33 Battery");
                break;
            default:
                printf("Error in part selection");

        }


    return 0;
}