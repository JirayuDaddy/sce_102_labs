#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printBoard(int *board, int *player)
{
    int i;

    printf("Board :: ");

    for (i = 0; i < 25; i++)
    {
        if (*(board + i) == *player)
        {
            printf("(%d) ", *(board + i));
        }
        else if (*(board + i) == 4 ||
                 *(board + i) == 14 ||
                 *(board + i) == 24)
        {
            printf("_%d_ ", *(board + i));
        }
        else
        {
            printf("%d ", *(board + i));
        }
    }

    printf("\n");
}

int main()
{
    int board[25];
    int player = 1;
    int dice;
    char choice;
    int i;

    srand(time(NULL));

    /* สร้าง Board 1 - 25 */
    for (i = 0; i < 25; i++)
    {
        board[i] = i + 1;
    }

    printf("Snake and Ladder\n");

    while (player < 25)
    {
        printBoard(board, &player);

        printf("Roll dice?(y): ");
        scanf(" %c", &choice);

        if (choice != 'y' && choice != 'Y')
        {
            printf("Error input\n");
            continue;
        }

        /* สุ่มลูกเต๋า 1 - 6 */
        dice = rand() % 6 + 1;

        printf("You got %d\n", dice);

        /* เดิน */
        player += dice;

        /* ถ้าถึงหรือเกิน 25 ให้จบที่ 25 */
        if (player >= 25)
        {
            player = 25;
            printBoard(board, &player);
            break;
        }

        /* Snake: ช่อง 4, 14, 24 ถอยหลัง 3 ช่อง */
        if (player == 4 || player == 14 || player == 24)
        {
            player -= 3;
        }

        printBoard(board, &player);
        printf("\n");
    }

    printf("FINISH!\n");

    return 0;
}