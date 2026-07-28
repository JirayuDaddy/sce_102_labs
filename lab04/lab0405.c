#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int number;
    printf("Available parts list\n");
    printf("48. Radiator 240\n");
    printf("61. X43 Alternator\n");
    printf("99. B33 Battery\n");
    printf("\nSelect the part to inspect: \n");
    scanf("%d", &number);
    switch (number)
    {
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
    }
    return 0;
} 

    