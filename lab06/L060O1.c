#include <stdio.h>
#include <time.h>

/* Busy-wait delay for the given number of milliseconds */
void delay(int milliseconds) {
    clock_t startTime = clock();
    while ((double)(clock() - startTime) * 1000.0 / CLOCKS_PER_SEC < milliseconds) {
        /* busy-wait */
    }
}

/* Cannon 1: fires 10 rounds/min -> 6 sec between shots, reported every 2 sec */
void fireCannon1(int rounds) {
    for (int i = 1; i <= rounds; i++) {
        printf("Firing cannon 1 %d/%d\n", i, rounds);
        if (i < rounds) {
            for (int step = 1; step <= 3; step++) {
                delay(2000);
                printf("%d sec. passed\n", step * 2);
            }
        }
    }
    printf("Cannon 1 out of ammo\n");
}

/* Cannon 2: fires 100 rounds/min -> 0.6 sec between shots, reported every 0.2 sec */
void fireCannon2(int rounds) {
    for (int i = 1; i <= rounds; i++) {
        printf("Firing cannon 2 %d/%d\n", i, rounds);
        if (i < rounds) {
            for (int step = 1; step <= 3; step++) {
                delay(200);
                printf("%.1f sec. passed\n", step * 0.2);
            }
        }
    }
    printf("Cannon 2 out of ammo\n");
}

int main(void) {
    int rounds1, rounds2;

    printf("Enter amount of rounds for cannon 1: ");
    scanf("%d", &rounds1);
    printf("Enter amount of rounds for cannon 2: ");
    scanf("%d", &rounds2);

    printf("Testing cannon 1\n");
    printf("----------------\n");
    fireCannon1(rounds1);

    printf("Testing cannon 2\n");
    printf("----------------\n");
    fireCannon2(rounds2);

    printf("End of program\n");

    return 0;
}
