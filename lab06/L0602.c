#include <stdio.h>
#include <stdlib.h>
#include <time.h>

<<<<<<< HEAD
int main()
{
    srand(time(NULL));
    int user_in, cpu_in;
    printf("Rock - Scissors - Paper\n");
    printf("\nRules\n---------------\n");
    printf("Rock > Scissors\nScissors > Paper\nPaper > Rock\n");
    do{
        do{
            printf("\nEnter 1.Rock 2.Scissors 3.Paper : ");
            scanf("%d", &user_in);
            printf("User :: ");
            switch(user_in){
                case 1:
                    printf("Rock\n");
                    break;
                case 2:
                    printf("Scissors\n");
                    break;
                case 3:
                    printf("Paper\n");
                    break;
                default:
                    printf("Error Input\n");
            }
        }while(user_in>3 || user_in<1);
        cpu_in=rand()%3+1;
        printf("CPU :: ");
        switch(cpu_in){
            case 1:
                printf("Rock\n");
                break;
            case 2:
                printf("Scissors\n");
                break;
            case 3:
                printf("Paper\n");
                break;
            default:
                printf("Error Input\n");
        }
        if(user_in==cpu_in){
            printf("\nIt's a tie!\n");
        }
    }while(user_in==cpu_in);
    if(user_in==3&&cpu_in==1){
        cpu_in=4;
    }
    if(user_in==1&&cpu_in==3){
        cpu_in=-1;
    }
    if(user_in<cpu_in){
        printf("\nPlayer wins!\n");
    }
    else{
        printf("\nCPU wins!\n");
    }
    return 0;
}
=======
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
>>>>>>> cddc665404318f88b3799f8f798d6d4972ed92f6
