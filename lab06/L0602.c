#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_choice(int choice)
{
    if(choice == 1)
    {
        printf("Rock\n");
    }
    else if(choice == 2 )
    {
        printf("Scissors\n");
    }
    else if(choice == 3)
    {
        printf("Paper\n");
    }
}
int game(void)
{
    srand(time(NULL));
    int player = 0, Ai = 0;
    do
    {
    do{
        printf("Enter 1.Rock 2.Scissors 3.Paper : ");
        scanf("%d", &player);
        if(player < 1 || player > 3)
        {
            printf("User :: Error input\n\n");
        }
    }
    while(player < 1 || player > 3);
    Ai=rand()%3 + 1;
    printf("User :: ");
    print_choice(player);
    printf("CPU :: ");
    print_choice(Ai);

    if(player == Ai)
    {
        printf("It's a tie!\n\n");
    }
    else if((player == 1 && Ai == 2 )||( player == 2 && Ai == 3) || (player == 3 && Ai == 1))
    {
        printf("player wins!\n");
    }
    else 
    {
        printf("Ai wins!\n");
    }
    }while(player == Ai);
    return 0;
}
int main()
{
    printf("Rock - Scissors - Paper\n\n");
    printf("Rule\n");
    printf("---------------\n");
    printf("Rock > Scissors\n");
    printf("Scissors > Paper\n");
    printf("Paper > Rock");
    game();
    return 0;
}
