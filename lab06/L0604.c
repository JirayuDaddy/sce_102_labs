#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int threeDices(void) {
    int d1 = rand() % 6 + 1;
    int d2 = rand() % 6 + 1;
    int d3 = rand() % 6 + 1;
    return d1 + d2 + d3;
}

int main(void) {
    srand((unsigned int) time(NULL));

    int wallet, bet, total;
    char betType, cont;

    printf("Sic Bo Simulator\n");
    printf("Enter wallet amount: ");
    scanf("%d", &wallet);

    while (1) {
        do {
            printf("Place your bet: ");
            scanf("%d", &bet);
        } while (bet > wallet);

        do {
            printf("High 'H' (11-18) or Low 'L' (3-10): ");
            scanf(" %c", &betType);
            betType = (char) toupper((unsigned char) betType);
        } while (betType != 'H' && betType != 'L');

        total = threeDices();
        printf("Three dices gave %d!\n", total);

        int isHigh = (total >= 11 && total <= 18);
        int win = (betType == 'H' && isHigh) || (betType == 'L' && !isHigh);

        if (win) {
            printf("You win!\n");
            wallet += bet;
        } else {
            printf("You lose!\n");
            wallet -= bet;
        }

        printf("Current wallet balance is %d\n", wallet);

        do {
            printf("Continue? (y/n): ");
            scanf(" %c", &cont);
            cont = (char) tolower((unsigned char) cont);
        } while (cont != 'y' && cont != 'n');

        if (cont == 'n' || wallet <= 0) {
            printf("Game over, please come again\n");
            break;
        }
    }

    return 0;
}
