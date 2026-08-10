#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char *handName(int choice) {
    switch (choice) {
        case 1: return "Rock";
        case 2: return "Scissors";
        case 3: return "Paper";
        default: return "Unknown";
    }
}

/* Returns 1 if hand 'a' beats hand 'b' (assumes a != b) */
int beats(int a, int b) {
    return (a == 1 && b == 2) ||   /* Rock beats Scissors */
           (a == 2 && b == 3) ||   /* Scissors beats Paper */
           (a == 3 && b == 1);     /* Paper beats Rock */
}

int main(void) {
    srand((unsigned int) time(NULL));

    printf("Rock - Scissors - Paper\n");
    printf("Rules\n");
    printf("---------------\n");
    printf("Rock > Scissors\n");
    printf("Scissors > Paper\n");
    printf("Paper > Rock\n");

    int userChoice, cpuChoice;
    int gameOver = 0;

    while (!gameOver) {
        printf("Enter 1.Rock 2.Scissors 3.Paper : ");
        scanf("%d", &userChoice);

        if (userChoice < 1 || userChoice > 3) {
            printf("User :: Error Input\n");
            continue;
        }

        cpuChoice = rand() % 3 + 1;

        printf("User :: %s\n", handName(userChoice));
        printf("CPU :: %s\n", handName(cpuChoice));

        if (userChoice == cpuChoice) {
            printf("It's a tie!\n");
        } else if (beats(userChoice, cpuChoice)) {
            printf("Player wins!\n");
            gameOver = 1;
        } else {
            printf("CPU wins!\n");
            gameOver = 1;
        }
    }

    return 0;
}
