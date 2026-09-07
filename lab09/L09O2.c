#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int position = 1;
    int *player_ptr = &position; 
    char choice;
    
    srand(time(NULL));
    printf("Snake and Ladder\n\n");

    while (1) {
        printf("Board :: ");
        for (int i = 1; i <= 25; i++)
         { 
            if (*player_ptr == i) {
                printf("(%d) ", i);
            } else if (i % 10 == 4) {
                printf("_%d_ ", i);
            } else {
                printf("%d ", i);
            }
        }
        printf("\n");

        if (*player_ptr >= 25) {
            break;
        }

        printf("Roll dice?(y): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            int dice = (rand() % 6) + 1;
            printf("You got %d\n", dice);

            *player_ptr += dice;

            if (*player_ptr > 25) {
                *player_ptr = 25;
            }

            printf("Board :: ");
            for (int i = 1; i <= 25; i++) {
                if (*player_ptr == i) {
                    printf("(%d) ", i);
                } else if (i % 10 == 4) {
                    printf("_%d_ ", i);
                } else {
                    printf("%d ", i);
                }
            }
            printf("\n");

            if (*player_ptr % 10 == 4 && *player_ptr < 25) {
                *player_ptr -= 3;
            }

            printf("\n");
        }
    }

    return 0;
}