#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Available parts list");
    printf("\n48. Radiator 240");
    printf("\n61. X43 Alternator");
    printf("\n99. B33 Battery");
    printf("\n\nSelect the part to inspect: ");
    scanf("%d", &num);
    switch (num)
    {
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
    }
    return 0;
}
