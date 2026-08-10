#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    printf("Rock - Scissors - Paper\n");

    printf("Rules:\n");
    printf("-------------------\n");
    printf("Rock beats Scissors\n");
    printf("Scissors beats Paper\n");
    printf("Paper beats Rock\n");   

    printf("Enter 1 for Rock, 2 for Scissors, and 3 for Paper: ");
    int userChoice;
    scanf("%d", &userChoice);

    int computerChoice = rand() % 3 + 1;
    printf("Computer chose: %d\n", computerChoice);

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && computerChoice == 2) ||
               (userChoice == 2 && computerChoice == 3) ||
               (userChoice == 3 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
    printf("Do you want to play again? (1 for Yes, 0 for No): ");
    int playAgain;
    scanf("%d", &playAgain);
    if (playAgain == 1) {
        main();
    }
    return 0;
}