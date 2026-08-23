#include <stdio.h>
#include <time.h>

void delay_ms(int milliseconds)
{
    clock_t start = clock();
    while ((clock() - start) < (clock_t)(milliseconds * CLOCKS_PER_SEC / 1000))
    {
    }
}

void fire_cannon1(int rounds)
{
    int i;

    printf("Testing cannon 1\n");
    printf("----------------\n\n");

    for (i = 1; i <= rounds; i++)
    {
        printf("Firing cannon 1 %d/%d\n", i, rounds);

        if (i < rounds)
        {
            int j;
            for (j = 1; j <= 3; j++)
            {
                delay_ms(2000);
                printf("%d sec. passed\n", j * 2);
            }
            printf("\n");
        }
        else
        {
            printf("\nCannon 1 out of ammo\n\n");
        }
    }
}

void fire_cannon2(int rounds)
{
    int i;

    printf("Testing cannon 2\n");
    printf("----------------\n\n");

    for (i = 1; i <= rounds; i++)
    {
        printf("Firing cannon 2 %d/%d\n", i, rounds);

        if (i < rounds)
        {
            int j;
            for (j = 1; j <= 3; j++)
            {
                delay_ms(200);
                printf("%.1f sec. passed\n", j * 0.2);
            }
            printf("\n");
        }
        else
        {
            printf("\nCannon 2 out of ammo\n\n");
        }
    }
}

int main(void)
{
    int rounds1, rounds2;

    printf("Enter amount of rounds for cannon 1: ");
    scanf("%d", &rounds1);

    printf("Enter amount of rounds for cannon 2: ");
    scanf("%d", &rounds2);

    printf("\n");

    fire_cannon1(rounds1);
    printf("\n");
    fire_cannon2(rounds2);
    printf("End of program\n");

    return 0;
}
