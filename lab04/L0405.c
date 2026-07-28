#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 0;
    printf("Available parts: \n ");
    printf("48 Radiator 240 \n");
    printf("61 X43 Alternator \n");
    printf("99 B33 battery \n");
    scanf("%d", &num);

    switch (num)
    {
        case 48:
            printf("You selected the Radiator 240.\n");
            break;
        case 61:
            printf("You selected the X43 Alternator.\n");
            break;
        case 99:
            printf("You selected the B33 battery.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
    return 0;
}
