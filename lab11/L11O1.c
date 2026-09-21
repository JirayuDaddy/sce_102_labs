#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct card 
{
    int point ; 
    char symbol;
};

void Drawingcard(struct card handCards[5],struct card new_card[5],int i);

int main()
{
    struct card handCards[5];
    srand(time(NULL));
    char choice;
    do
    {
        printf("\nDraw 5 cards? (y/n) : ");
        scanf(" %c",&choice);
        if(choice == 'y')
        {
            printf("Yous got ");
            for(int i = 0 ; i<=4 ; i++)
            {   
                struct card new_card[5];
                Drawingcard(handCards,new_card,i);   
            }
            continue;
        }

    }while (choice != 'n');
    return 0;
}

void Drawingcard(struct card handCards[5],struct card new_card[5],int i)
{
    int card_point = rand() % 13 + 1;
    int card_symbol = rand() % 4 + 65;
    new_card[i].point = card_point;
    new_card[i].symbol = card_symbol;
    handCards[i].point = new_card[i].point;
    handCards[i].symbol = new_card[i].symbol;
    printf("%d%c ",handCards[i].point,handCards[i].symbol);
}