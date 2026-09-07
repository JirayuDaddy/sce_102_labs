#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int playerATK = 1100;
    int playerDEF = 2500;

    int opponentATK = 800;
    int opponentDEF = 1700;

    char choice;

    printf("Card Battle!\n\n");

    printf("Player\n");
    printf("------\n");
    printf("ATK :: %d    DEF :: %d\n\n", playerATK, playerDEF);

    printf("Opponent\n");
    printf("--------\n");
    printf("ATK :: %d    DEF :: %d\n\n", opponentATK, opponentDEF);

    printf("Switch player's ATK and DEF? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y')
    {
        swap(&playerATK, &playerDEF);
    }

    printf("\nPlayer\n");
    printf("------\n");
    printf("ATK :: %d    DEF :: %d\n\n", playerATK, playerDEF);

    printf("Attack calculating ATK vs ATK\n");

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