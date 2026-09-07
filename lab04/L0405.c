<<<<<<< HEAD
#include <stdio.h>

int main(){
    int choice;
    printf("Available parts list\n\n");
    printf("48. Radiator 240\n");
    printf("61. X43 Aiternator\n");
    printf("99. B33 Battery\n");
    printf("Select the part to inspect: ");
    scanf("%d", &choice);
    switch(choice){
        case 48:
        printf("Radiator 240 selected\n");
        break;
        case 61:
        printf("X43 Aiternator selected\n");
        break;
        case 99:
        printf("B33 Battery selected\n");
        break;
        default:
        printf("Error in part selection selected\n");
        break;
    }
    return 0;
=======
#include <stdio.h>

int main(){
    int choice;
    printf("Available parts list\n\n");
    printf("48. Radiator 240\n");
    printf("61. X43 Aiternator\n");
    printf("99. B33 Battery\n");
    printf("Select the part to inspect: ");
    scanf("%d", &choice);
    switch(choice){
        case 48:
        printf("Radiator 240 selected\n");
        break;
        case 61:
        printf("X43 Aiternator selected\n");
        break;
        case 99:
        printf("B33 Battery selected\n");
        break;
        default:
        printf("Error in part selection selected\n");
        break;
    }
    return 0;
>>>>>>> b49dcfd2d22634d610dba96f1da2ad43d5909583
}