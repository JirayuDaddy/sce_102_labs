#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int player_atk = 1100;
    int player_def = 2500;
    int opp_atk = 800;
    int opp_def = 1700;
    char choice;

    printf("Card Battle!\n");
    printf("Player\n");
    printf("-------\n");
    printf("ATK : : %d    DEF : : %d\n\n", player_atk, player_def);
    
    printf("Opponent\n");
    printf("--------\n");
    printf("ATK : : %d    DEF : : %d\n\n", opp_atk, opp_def);

    printf("Switch player's ATK and DEF? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        swap(&player_atk, &player_def);
    }

    printf("\nPlayer\n");
    printf("-------\n");
    printf("ATK : : %d    DEF : : %d\n\n", player_atk, player_def);

    printf("Attack calculating ATK vs ATK\n");
    if (player_atk > opp_atk) {
        printf("Opponent destroyed!\n");
    } else if (player_atk < opp_atk) {
        printf("Player destroyed!\n");
    } else {
        printf("Draw!\n");
    }

    return 0;
}