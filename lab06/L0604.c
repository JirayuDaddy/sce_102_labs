#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/(/◕ヮ◕)/
//༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽༼ಢ_ಢ༽
int threeDices() {
    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;
    int dice3 = (rand() % 6) + 1;
    return dice1 + dice2 + dice3;
}

int main() {
    srand(time(NULL));

    int wallet = 0;
    int bet = 0;
    char choice;
    char cont;

    printf("Sic Bo Simulator\n\n");
    printf("Enter wallet amount: ");
    scanf("%d", &wallet);
    printf("\n");

    while (wallet > 0) {
        do {
            printf("Place your bet: ");
            scanf("%d", &bet);
        } while (bet > wallet);
        do {
            printf("High 'H' (11-18) or Low 'L' (3-10): ");
            scanf(" %c", &choice);
            while (getchar() != '\n');
        } while (choice != 'H' && choice != 'L');
        int total = threeDices();
        printf("Three dices gave %d!\n", total);
        int is_high = (total >= 11 && total <= 18);
        if ((choice == 'H' && is_high) || (choice == 'L' && !is_high)) {
            printf("You win!\n");
            wallet += bet;
        } else {
            printf("You lose!\n");
            wallet -= bet;
        }
        printf("\nCurrent wallet balance is %d\n\n", wallet);
        if (wallet <= 0) {
            break;
        }
        do {
            printf("Continue? (y/n): ");
            scanf(" %c", &cont);
            while (getchar() != '\n');
        } while (cont != 'y' && cont != 'n');
        if (cont == 'n') {
            printf("\n\n");
            break;
        }
        printf("\n");
    }

    printf("Game over, please come again\n");

    return 0;
}
