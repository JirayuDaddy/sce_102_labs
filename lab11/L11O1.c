#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct card 
{
    int point ; 
    char symbol;
};

void Drawingcard(struct card handCards[5],struct card new_card[5],int i)
{
    srand(time(NULL));
    int card_point = handCards[i].point;
    int card_symbol = handCards[i].symbol;
    new_card[i].point = card_point%13 + 1;
    new_card[i].symbol = card_symbol/13 + 65;
    printf("%d%c ",new_card[i].point,new_card[i].symbol);
}

int main()
{
    struct card handCards[5];
    char choice;
    do
    {
        printf("Draw 5 cards? (y/n) : ");
        scanf(" %c",&choice);
        if(choice == 'y')
        {
            struct card new_card[5];
            printf("You got ");
            for(int i = 0 ; i<=4 ; i++)
            {
                Drawingcard(handCards,new_card,i);
            }
    }
    }while (choice!='y' && choice != 'n');
}