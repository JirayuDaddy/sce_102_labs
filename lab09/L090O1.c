#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swapValues(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int playerATK, playerDEF, opponentATK, opponentDEF;
    char choice;

    srand((unsigned int)time(NULL));

    playerATK = (rand() % 35 + 1) * 100;
    playerDEF = (rand() % 35 + 1) * 100;
    opponentATK = (rand() % 35 + 1) * 100;
    opponentDEF = (rand() % 35 + 1) * 100;

    printf("Card Battle!\n\n");

    printf("Player\n");
    printf("--------\n");
    printf("ATK :: %d\tDEF :: %d\n\n", playerATK, playerDEF);

    printf("Opponent\n");
    printf("--------\n");
    printf("ATK :: %d\tDEF :: %d\n\n", opponentATK, opponentDEF);

    do
    {
        printf("Switch player's ATK and DEF? (y/n): ");
        scanf(" %c", &choice);

        if (choice != 'y' && choice != 'n')
        {
            printf("Error input\n\n");
        }
    } while (choice != 'y' && choice != 'n');

    if (choice == 'y')
    {
        swapValues(&playerATK, &playerDEF);
        printf("\nPlayer\n");
        printf("--------\n");
        printf("ATK :: %d\tDEF :: %d\n", playerATK, playerDEF);
    }

    printf("\nAttack calculating ATK vs ATK\n");
    if (playerATK > opponentATK)
    {
        printf("Opponent destroyed!\n");
    }
    else if (playerATK < opponentATK)
    {
        printf("Player destroyed!\n");
    }
    else
    {
        printf("Draw!\n");
    }

    return 0;
}
