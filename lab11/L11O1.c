#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct card {
    int point;
    char symbol;
};
void printHand(struct card handCards[5]) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d%c", handCards[i].point, handCards[i].symbol);
        if (i < 4) {
            printf(" ");}}
    printf("\n");
}
int main(void) {
    struct card handCards[5];
    char choice;
    int i;
    int card_value;
    srand((unsigned int)time(NULL));
    do {
        printf("Draw 5 cards? (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'y' || choice == 'Y') {
            for (i = 0; i < 5; i++) {
                card_value = rand() % 52;
                handCards[i].point = card_value % 13 + 1;
                handCards[i].symbol = (char)(card_value / 13 + 65);}
            printf("\nYou got ");
            printHand(handCards);
            printf("\n");
        } else if (choice != 'n' && choice != 'N') {
            printf("\nInvalid choice. Please enter y or n.\n\n");}
    } while (choice != 'n' && choice != 'N');
    return 0;}