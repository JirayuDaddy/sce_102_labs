#include <stdio.h>
#include <time.h>

void delay(int ms)
{
    clock_t start_time = clock();
    while (clock() < start_time + ms * CLOCKS_PER_SEC / 1000)
        ;
}

void cannon1(int ammo)
{
    printf("\nTesting cannon 1\n");
    printf("----------------\n");

    for (int i = 1; i <= ammo; i++)
    {
        printf("\nFiring cannon 1 %d/%d\n", i, ammo);

        if (i < ammo)
        {
            for (int sec = 2; sec <= 6; sec += 2)
            {
                delay(2000);
                printf("%d sec. passed\n", sec);
            }
        }
    }
    printf("\nCannon 1 out of ammo\n");
}

void cannon2(int ammo)
{
    printf("\nTesting cannon 2\n");
    printf("----------------\n");

    for (int i = 1; i <= ammo; i++)
    {
        printf("\nFiring cannon 2 %d/%d\n", i, ammo);

        if (i < ammo)
        {
            for (double sec = 0.2; sec <= 0.61; sec += 0.2)
            {
                delay(200);
                printf("%.1f sec. passed\n", sec);
            }
        }
    }
    printf("\nCannon 2 out of ammo\n");
}

int main()
{
    int ammo1, ammo2;

    printf("Enter amount of rounds for cannon 1: ");
    scanf("%d", &ammo1);
    printf("Enter amount of rounds for cannon 2: ");
    scanf("%d", &ammo2);

    cannon1(ammo1);
    cannon2(ammo2);

    printf("\nEnd of program\n");

    return 0;
}