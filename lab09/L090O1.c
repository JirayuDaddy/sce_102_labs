#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int swapmycpu(int *myput_atk, int *myput_def)
{
    int swap;
    swap = *myput_atk;
    *myput_atk = *myput_def;
    *myput_def = swap;
    return *myput_atk, *myput_def;
}

int main()
{
    srand(time(NULL));
    int myput_atk, myput_def, cpuput_atk, cpuput_def;
    char choice;

    myput_atk = rand() % (40 + 1) * 100;
    myput_def = rand() % (40 + 1) * 100;
    cpuput_atk = rand() % (40 + 1) * 100;
    cpuput_def = rand() % (40 + 1) * 100;

    printf("Card Battle!\n");
    printf("\nPlayer\n--------\n");
    printf("ATK :: %-8d DEF :: %d\n\n", myput_atk, myput_def);
    printf("Opponent\n--------\n");
    printf("ATK :: %-8d DEF :: %d\n\n", cpuput_atk, cpuput_def);

    do
    {
        printf("Switch player's ATK and DEF? (y/n): ");
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'n')
        {
            printf("Error input\n\n");
        };
    } while (choice != 'y' && choice != 'n');

    if (choice == 'y')
    {
        int swap = swapmycpu(&myput_atk, &myput_def);
        printf("\nPlayer\n--------\n");
        printf("ATK :: %-8d DEF :: %d\n\n", myput_atk, myput_def);
    }
    else if (choice == 'n')
    {
        printf("\n");
    }

    printf("Attack calculating ATK vs ATK\n");

    if (myput_atk > cpuput_atk)
    {
        printf("Opponent destroyed!");
    }
    else if (cpuput_atk > myput_atk)
    {
        printf("Player destroyed!");
    }

    return 0;
}