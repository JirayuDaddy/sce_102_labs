#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void showBoard(int *board, int position);
int main()
{
   int board[25];
   int *ptr = board;
   int position = 1;
   int dice;
   char choice;
   srand(time(NULL));
   for(int i = 0; i < 25; i++)
   {
       *(ptr + i) = i + 1;
   }
   printf("Snake and Ladder\n\n");
   while(position < 25)
   {
       showBoard(ptr, position);
       printf("Roll dice?(y): ");
       scanf(" %c", &choice);
       if(choice != 'y')
       {
           printf("Error input\n\n");
           continue;
       }
       dice = rand() % 6 + 1;
       printf("You got %d\n", dice);
       position = position + dice;
       if(position >= 25)
       {
           position = 25;
       }
       else if(position == 4 || position == 14 || position == 24)
       {
           position = position - 3;
       }
       showBoard(ptr, position);
       printf("\n");
   }
   printf("FINISH!\n");
   return 0;
}

void showBoard(int *board, int position)
{
   printf("Board :: ");
   for(int i = 0; i < 25; i++)
   {
       // ช่องที่ผู้เล่นอยู่
       if(*(board + i) == position)
       {
           printf("(%d) ", *(board + i));
       }
       // ช่องหลุม
       else if(*(board + i) == 4 ||
               *(board + i) == 14 ||
               *(board + i) == 24)
       {
           printf("_%d_ ", *(board + i));
       }
       // ช่องธรรมดา
       else
       {
           printf("%d ", *(board + i));
       }
   }
   printf("\n");
}