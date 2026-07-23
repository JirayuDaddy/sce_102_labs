#include <stdio.h>

int main() {
    int choice;

    printf("Available parts list\n");
    printf("48. Radiator 240\n");
    printf("61. X43 Alternator\n");
    printf("99. B33 Battery\n\n");

    printf("Select the part to inspect: ");
    scanf("%d", &choice);


    switch(choice) {
        case 48:
            printf("Radiator 240 selected\n");
            break;
        case 61:
            printf("X43 Alternator selected\n");
            break;
        case 99:
            printf("B33 Battery selected\n");
            break;
        default:
            printf("Error in part selection\n");
            break;
    }

    return 0;
}