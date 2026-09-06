#include <stdio.h>

void swap(int *first, int *second)
{
    int temporary = *first;
    *first = *second;
    *second = temporary;
}

void print_card(const char *name, int atk, int def)
{
    printf("%s\n--------\n", name);
    printf("ATK : %d\n", atk);
    printf("DEF : %d\n", def);
}

int main(void)
{
    int player_atk;
    int player_def;
    int opponent_atk;
    int opponent_def;
    char answer;

    player_atk = 1100;
    player_def = 2500;
    opponent_atk = 800;
    opponent_def = 1700;

    printf("Card Battle!\n");

    print_card("Player", player_atk, player_def);
    print_card("Opponent", opponent_atk, opponent_def);

    do {
        printf("Switch player's ATK and DEF? (y/n): ");
        scanf(" %c", &answer);
        if (answer != 'y' && answer != 'n') {
            printf("Error input\n");
        }
    } while (answer != 'y' && answer != 'n');

    if (answer == 'y') {
        swap(&player_atk, &player_def);
        print_card("Player", player_atk, player_def);
    }

    printf("Attack calculating ATK vs ATK\n");
    if (player_atk > opponent_atk) {
        printf("Opponent destroyed!\n");
    } else if (player_atk < opponent_atk) {
        printf("Player destroyed!\n");
    } else {
        printf("Both cards destroyed!\n");
    }

    return 0;
}
