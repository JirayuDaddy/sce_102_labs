#include <stdio.h>

int swap(int *enea1, int *ene2) {
    int temp = *enea1;
    *enea1 = *ene2;
    *ene2 = temp;
    return 0; 
}

int main() {
    int p_atk = 1100, p_def = 2500;
    int o_atk = 800, o_def = 1700;
    char choice;

    printf("Card Battle!\n\n");
    printf("Player\n------\n");
    printf("ATK :: %d\tDEF :: %d\n\n", p_atk, p_def);
    printf("Opponent\n--------\n");
    printf("ATK :: %d\tDEF :: %d\n\n", o_atk, o_def);

    printf("Switch player's ATK and DEF? (y/n): ");
    scanf(" %c", &choice);
    printf("\n");

    if (choice == 'y' || choice == 'Y') {
        swap(&p_atk, &p_def);
        printf("Player\n------\n");
        printf("ATK :: %d\tDEF :: %d\n\n", p_atk, p_def);
    }

    printf("Attack calculating ATK vs ATK\n");
    if (p_atk > o_atk) {
        printf("Opponent destroyed!\n");
    } else if (p_atk < o_atk) {
        printf("Player destroyed!\n");
    } else {
        printf("Draw!\n");
    }

    return 0;
}