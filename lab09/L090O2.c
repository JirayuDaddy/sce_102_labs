#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int dice_roll(int *sum)
{
    *sum = rand() % 6 + 1;
    return *sum; 
}
void print_board(int position)
{
    printf("\nBoard :: ");
    int board[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            if(board[i][j] == position)
            {
                printf("(%d) ", board[i][j]);
            }
            else if (board[i][j] % 10 == 4)
            {
                printf("_%d_ ", board[i][j]);
            }
            else
            {
                printf("%d ", board[i][j]);
            }
        }
    }
}
int main()
{
    char choice;
    int roll = 0;
    int position = 1;

    srand(time(NULL));
    printf("Snake and ladder\n");

    print_board(position);
      
    do
    {
        do
        {
            printf("\nRoll dice?(y); ");
            scanf(" %c", &choice);

            if(choice != 'y')
            {
                printf("Error input\n");
            }
        }
        while(choice != 'y');
        
        dice_roll(&roll);
        print_board(position);
        position += roll;
        printf("\nYou got %d\n", roll);

        if(position > 25)
        {
            position = 25;
        }
        if(position % 10 == 4 && position != 25)
        {
            printf("\nYou fell back!\n");
            position -= 3;
        }

        print_board(position);

        if(position >= 25)
        {
            printf("\n\nFINISH!\n");
            break;
        }

    }
    while(1);    
    return 0;
}