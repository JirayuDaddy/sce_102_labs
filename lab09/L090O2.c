#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 25

void printBoard(int *board, int pos)
{
    int i;

    printf("Board ::\n");
    for (i = 0; i < BOARD_SIZE; i++, board++)
    {
        if (*board == pos)
        {
            printf("(%d)\t", *board);
        }
        else if (*board % 10 == 4)
        {
            printf("_%d_\t", *board);
        }
        else
        {
            printf("%d\t", *board);
        }

        if ((i + 1) % 5 == 0)
        {
            printf("\n");
        }
    }
}

int main()
{
    int board[BOARD_SIZE];
    int pos = 1;
    int dice;
    char choice;
    int i;

    for (i = 0; i < BOARD_SIZE; i++)
    {
        board[i] = i + 1;
    }

    srand((unsigned int)time(NULL));

    printf("Snake and Ladder\n\n");
    printBoard(board, pos);

    while (1)
    {
        printf("Roll dice?(y): ");
        scanf(" %c", &choice);

        if (choice != 'y')
        {
            printf("Error input\n");
            continue;
        }

        dice = rand() % 6 + 1;
        printf("You got %d\n", dice);

        pos += dice;

        if (pos >= BOARD_SIZE)
        {
            pos = BOARD_SIZE;
            printBoard(board, pos);
            printf("\n");
            printf("FINISH!\n");

            printf("Play again?(y/n): ");
            scanf(" %c", &choice);

            if (choice != 'y')
            {
                break;
            }

            pos = 1;
            printBoard(board, pos);
            continue;
        }

        if (pos % 10 == 4)
        {
            pos -= 3;
        }

        printBoard(board, pos);
        printf("\n");
        printBoard(board, pos);
    }

    return 0;
}
