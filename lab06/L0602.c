#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void print_choice(int choice)
{
    if (choice == 1)
    {
        printf("Rock\n");
    }
    else if (choice == 2)
    {
        printf("Scissors\n");
    }
    else if (choice == 3)
    {
        printf("Paper\n");
    }
}
int game(void)
{
    
    srand(time(NULL));
    int player = 0, computer = 0;
    do
    {
        do
        {
            printf("Enter 1.Rock 2.Scissors 3.Paper : ");
            scanf("%d", &player);
        
            if (player < 1 || player > 3)
            {
            printf("User :: Error Input\n\n");
            }
        }
        while (player < 1 || player > 3);
        
        computer = rand() % 3 + 1;
        printf("User :: ");
        print_choice(player);
        printf("CPU :: ");
        print_choice(computer);
        
        if (player == computer)
        {
            printf("\nIt's a tie!\n\n");
        }
        else if ((player == 3 && computer == 1) || (player == 2 && computer == 3) || (player == 1 && computer == 2))
        {
            printf("\nPlayer wins!\n");
        }
        else
        {
            printf("\nCPU wins!\n");
        }
    }
    while (player == computer);
return 0;
}

int main(){
printf("Rock - Scissors  - Paper\n\n");
printf("Rules\n");
printf("---------------\n");
printf("Rock > Scissors\n");
printf("Scissors > Paper\n");
printf("Paper > Rock\n\n");
game();
return 0;
}