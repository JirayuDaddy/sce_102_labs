#include <stdio.h>
#include <time.h>

void delay(int milliseconds)
{
    clock_t start = clock();

    while ((clock() - start) * 1000 / CLOCKS_PER_SEC < milliseconds)
    {
        
    }
}

void cannon1(int rounds)
{
    int i;

    printf("Testing cannon 1\n");
    printf("----------------\n");

    for (i = 1; i <= rounds; i++)
    {
        printf("Firing cannon 1 %d/%d\n", i, rounds);

        
        if (i < rounds)
        {
            delay(2000);
            printf("2 sec. passed\n");

            delay(2000);
            printf("4 sec. passed\n");

            delay(2000);
            printf("6 sec. passed\n");
        }
    }

    printf("Cannon 1 out of ammo\n");
}

void cannon2(int rounds)
{
    int i;

    printf("Testing cannon 2\n");
    printf("----------------\n");

    for (i = 1; i <= rounds; i++)
    {
        printf("Firing cannon 2 %d/%d\n", i, rounds);

        if (i < rounds)
        {
            delay(200);
            printf("0.2 sec. passed\n");

            delay(200);
            printf("0.4 sec. passed\n");

            delay(200);
            printf("0.6 sec. passed\n");
        }
    }

    printf("Cannon 2 out of ammo\n");
}

int main()
{
    int rounds1, rounds2;

    printf("Enter amount of rounds for cannon 1: ");
    scanf("%d", &rounds1);

    printf("Enter amount of rounds for cannon 2: ");
    scanf("%d", &rounds2);

    printf("\n");

    cannon1(rounds1);

    printf("\n");

    cannon2(rounds2);

    printf("\nEnd of program\n");

    return 0;
}