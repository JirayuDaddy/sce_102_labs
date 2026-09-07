#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void ATKDEF(int *atk , int *def)
{
    *atk = rand() % 2500 + 1;
    *def = rand() % 2500 + 1;
    printf("ATK :: %d      DEF :: %d\n", *atk , *def);
} 

void swap(int *atk,int *def)
{
    int temp;
    temp = *atk;
    *atk = *def;
    *def = temp;
    printf("ATK :: %d      DEF :: %d\n", *atk , *def);

}

int main()
{
    
    int atk_player,def_player; 
    int atk_opponent,def_opponent;
    srand(time(NULL));
    printf("Card Battle\n");
    printf("Player\n");
    printf("-----------\n");
    ATKDEF(&atk_player , &def_player);
    printf("Opponent\n");
    printf("-----------\n");
    ATKDEF(&atk_opponent , &def_opponent);
    char swap_choice;
    do
    {
        printf("Switch player's ATK and DEF? (y/n) : ");
        scanf(" %c",&swap_choice);
        if(swap_choice != 'y' || swap_choice != 'n')
        {
            printf("Error input\n");
        }
    } while (swap_choice != 'y' && swap_choice != 'n' );
    if(swap_choice == 'y')
    {
        swap(&atk_player,&def_player);
    }
    printf("Attack calculating ATK vs ATK\n");
    if(atk_player > atk_opponent)
    {
        printf("Opponent destroyed!");
    }
    else if (atk_player < atk_opponent)
    {
        printf("Player destroyed!");
    }
    return 0;
}