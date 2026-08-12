#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, cpu;

    srand(time(NULL));

    printf("Rock - Scissors - Paper\n\n");

    printf("Rules\n");
    printf("-----\n");
    printf("Rock > Scissors\n");
    printf("Scissors > Paper\n");
    printf("Paper > Rock\n\n");

    do {
        printf("Enter 1.Rock 2.Scissors 3.Paper : ");
        scanf("%d", &user);

        cpu = rand() % 3 + 1;

        printf("User :: ");

        if (user == 1)
            printf("Rock\n");
        else if (user == 2)
            printf("Scissors\n");
        else if (user == 3)
            printf("Paper\n");

        printf("CPU :: ");

        if (cpu == 1)
            printf("Rock\n");
        else if (cpu == 2)
            printf("Scissors\n");
        else if (cpu == 3)
            printf("Paper\n");

        if (user == cpu) {
            printf("\nIt's a tie!\n\n");
        }
        else if ((user == 1 && cpu == 2) ||
                 (user == 2 && cpu == 3) ||
                 (user == 3 && cpu == 1)) {
            printf("\nPlayer wins!\n");
            break;
        }
        else {
            printf("\nCPU wins!\n");
            break;
        }

    } while (1);

    return 0;
}