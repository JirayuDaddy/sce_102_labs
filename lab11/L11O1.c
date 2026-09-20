#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct card {
    int point;
    char symbol;
};

int main() {
    struct card handCards[5];
    char choice;

    srand(time(NULL));

    while (1) {
        printf("Draw 5 cards? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            for (int i = 0; i < 5; i++) {
                int card_value = rand() % 52; 
                handCards[i].point = card_value % 13 + 1;
                handCards[i].symbol = (char)(card_value / 13 + 65);
            }

            printf("\nYou got ");
            for (int i = 0; i < 5; i++) {
                printf("%d%c", handCards[i].point, handCards[i].symbol);
                if (i < 4) {
                    printf(" ");
                }
            }
            printf("\n\n");
        } 
        else if (choice == 'n' || choice == 'N') {
            break;
        }
    }

    return 0;
}