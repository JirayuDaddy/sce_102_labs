#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 25

void print_board(const int *position)
{
    int i;

    printf("Board :\n: ");
    for (i = 1; i <= BOARD_SIZE; i++) {
        if (i == *position) {
            printf("(%d)", i);
        } else if (i % 10 == 4) {
            printf("_%d_", i);
        } else {
            printf("%d", i);
        }

        if (i < BOARD_SIZE) {
            printf(" ");
        }
    }
    printf("\n");
}

int main(void)
{
    int position = 1;
    int dice;
    char answer;

    srand((unsigned int)time(NULL));
    printf("Snake and Ladder\n");
    print_board(&position);

    while (position < BOARD_SIZE) {
        printf("Roll dice? (y): ");
        scanf(" %c", &answer);

        if (answer != 'y') {
            printf("Error input\n");
            continue;
        }

        dice = rand() % 6 + 1;
        printf("You got %d\n", dice);
        position += dice;

        if (position >= BOARD_SIZE) {
            position = BOARD_SIZE;
        } else if (position % 10 == 4) {
            position -= 3;
        }

        print_board(&position);
    }

    printf("FINISH!\n");
    return 0;
}
