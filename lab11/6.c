#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct card
{
    int point;     
    char symbol;   
};

int main()
{
    struct card handCards[5];
    char choice;
    int i, card_value;

    srand((unsigned)time(NULL));

    while (1)
    {
        do
        {
            printf("Draw 5 cards? (y/n): ");
            scanf(" %c", &choice);
        } while (choice != 'y' && choice != 'n');

        if (choice == 'n')
        {
            break;
        }

        for (i = 0; i < 5; i++)
        {
            card_value = rand() % 52;                  
            handCards[i].point = card_value % 13 + 1;
            handCards[i].symbol = card_value / 13 + 65;
        }

        printf("You got");
        for (i = 0; i < 5; i++)
        {
            printf(" %d%c", handCards[i].point, handCards[i].symbol);
        }
        printf("\n");
    }

    return 0;
}