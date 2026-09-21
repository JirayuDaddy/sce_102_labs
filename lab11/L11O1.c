#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct card
{
    int point;
    char symbol;
};

void drawing_cards (struct card handcard[] , int i , const char symbol[])
{
    handcard[i].point = rand() % 13 + 1;
    handcard[i].symbol = symbol[rand() % 4];
}

int main ()
{
    
    struct card handcard [5];
    char symbol[4] = {'A' , 'B' , 'C' , 'D'};
    char yn;

    srand(time(NULL));
    do
    {
        
        printf("Draw 5 cards? (y/n); ");
        scanf(" %c", &yn);

        if(yn == 'y')
        {
           
            printf("You got ");
            for(int i = 0 ; i < 5 ; i++)
            {
                drawing_cards(handcard , i , symbol);
                printf("%d%c ", handcard[i].point, handcard[i].symbol);
            }
        }

    } while (yn != 'y' && yn != 'n');

    return 0;
}