#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void ATKDEF(int *atk , int *def)
{
    *atk = rand() % 2500 + 1;
    *def = rand() % 2500 + 1;
    printf("ATK :: %d      DEF :: %d\n", *atk , *def);
}

int main() {
    srand(time(0));
    int atk_player,def_player; 
    int atk_opp,def_opp;
    char choice;
 

    printf("Card Battle!\n");
    printf("Player\n");
    printf("-------\n");
    ATKDEF(&atk_player, &def_player);
    
    printf("Opponent\n");
    printf("--------\n");
    ATKDEF(&atk_opp, &def_opp);

    printf("Switch player's ATK and DEF? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        swap(&atk_player, &def_player);
    }

    printf("\nPlayer\n");
    printf("-------\n");
    printf("ATK : : %d    DEF : : %d\n\n", atk_player, def_player);

    printf("Attack calculating ATK vs ATK\n");
    if (atk_player > atk_opp) {
        printf("Opponent destroyed!\n");
    } else if (atk_player < atk_opp) {
        printf("Player destroyed!\n");
    } else {
        printf("Draw!\n");
    }

    return 0;
}