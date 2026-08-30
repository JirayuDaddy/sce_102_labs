#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Delay(int ms)
{
    clock_t start = clock();
    double elapsed;
    do
    {
        elapsed = (double)(clock() - start) / CLOCKS_PER_SEC * 1000;
    } while (elapsed < ms);
}

void fireCannon1(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        printf("Firing cannon 1 %d/%d\n", i, n);

        if (i != n)
        {
            for (j = 1; j <= 3; j++)
            {
                Delay(2000);
                printf("%d sec. passed\n", j * 2);
            }
        }
    }
    printf("\n");
    printf("Cannon 1 out of ammo\n");
}

void fireCannon2(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        printf("Firing cannon 2 %d/%d\n", i, n);

        if (i != n)
        {
            for (j = 1; j <= 3; j++)
            {
                Delay(200);
                printf("%.1f sec. passed\n", j * 0.2);
            }
        }
    }
    printf("\n");
    printf("Cannon 2 out of ammo\n");
}

int main()
{
    int r1, r2;

    printf("Enter amount of rounds for cannon 1: ");
    scanf("%d", &r1);
    printf("Enter amount of rounds for cannon 2: ");
    scanf("%d", &r2);

    printf("\n");
    printf("Testing cannon 1\n");
    printf("----------------\n");
    fireCannon1(r1);

    printf("\n");
    printf("Testing cannon 2\n");
    printf("----------------\n");
    fireCannon2(r2);

    printf("\n");
    printf("End of program\n");

    return 0;
}
