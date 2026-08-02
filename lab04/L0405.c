#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;

    printf("Available parts list\n");
    printf("48. Radiator 240\n");
    printf("61. X43 Alternator\n");
    printf("99. B33 Battery\n\n");

    printf("Select the part to inspect: ");
    scanf("%d", &number);

    switch (number) {
        case 48:
            printf("Radiator 240 selected");
            break;
        case 61:
            printf("X43 Alternator selected");
            break;
        case 99:
            printf("B33 Battery selected");
            break;
        default:
            printf("Error in part selection");
            break;
    }

    return 0;
}