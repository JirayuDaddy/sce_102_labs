#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int threeDices() {
    int d1 = (rand() % 6) + 1;
    int d2 = (rand() % 6) + 1;
    int d3 = (rand() % 6) + 1;
    return d1 + d2 + d3;
}

int main() {
    int wallet = 0;
    int bet = 0;
    char choice;
    char play_again;

    srand(time(NULL));

    printf("Sic Bo Simulator\n\n");

    printf("Enter wallet amount: ");
    scanf("%d", &wallet);
    printf("\n");


    while (wallet > 0) {

        while (1) {
            printf("Place your bet: ");
            scanf("%d", &bet);
            if (bet <= wallet && bet > 0) {
                break;
            }
            printf("Invalid bet amount! You only have %d.\n", wallet);
        }

        while (1) {
            printf("High 'H' (11-18) or Low 'L' (3-10): ");
            scanf(" %c", &choice); 
            if (choice == 'H' || choice == 'L' || choice == 'h' || choice == 'l') {
                break;
            }
        }

  
        int total = threeDices();
        printf("Three dices gave %d!\n", total);

        int is_high = (total >= 11 && total <= 18);
        int is_low = (total >= 3 && total <= 10);
        int win = 0;

        if ((choice == 'H' || choice == 'h') && is_high) {
            win = 1;
        } else if ((choice == 'L' || choice == 'l') && is_low) {
            win = 1;
        }


        if (win) {
            printf("You win!\n\n");
            wallet += bet;
        } else {
            printf("You lose!\n\n");
            wallet -= bet;
        }


        printf("Current wallet balance is %d\n\n", wallet);


        if (wallet <= 0) {
            printf("Game over! You ran out of money.\n");
            break;
        }

        printf("Continue? (y/n): ");
        scanf(" %c", &play_again);
        printf("\n");

        if (play_again != 'y' && play_again != 'Y') {
            break;
        }
    }

    return 0;
}
