#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Lab 11 - L11O1: Card Game */
/* struct card with point (int) and symbol (char) */
/* 52 cards: point = card_value % 13 + 1, symbol = card_value / 13 + 65 */
/* Draw 5 random cards, display as "point+symbol" (e.g. "13D") */
/* Loop: ask "Draw 5 cards? (y/n): ", 'y'=draw, 'n'=exit, else re-prompt */

struct card {
    int point;
    char symbol;
};

int main() {
    char choice;
    int i, card_value;
    struct card new_card;

    srand(time(NULL));

    do {
        printf("Draw 5 cards? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y') {
            printf("You got ");
            for (i = 0; i < 5; i++) {
                card_value = rand() % 52;
                new_card.point = card_value % 13 + 1;
                new_card.symbol = card_value / 13 + 65;
                printf("%d%c", new_card.point, new_card.symbol);
                if (i < 4) {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } while (choice != 'n');

    return 0;
}
