#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomresult()
{
    int result = 0;
    srand(time(NULL));
    result = rand()%3+1;
    return result;
}

int main()
{
    int result =0;
    int user_attempt = 0;
    int bot_attempt = 0;
    printf("Rock - Scissors - Paper");
    printf("\n\nRules");
    printf("\n-----------");
    printf("\nRock > Scissors");
    printf("\nScissors > Rock");
    printf("\nPaper > Rock");
    while(result != -1 || result != 2)
    {
        printf("\nEnter 1.Rock 2.Scissors 3.Paper : ");
        scanf("%d",&user_attempt);
        bot_attempt = randomresult();
        printf("User :: ");
        if(user_attempt == 1)
        {
            printf("Rock");
        }
        else if (user_attempt == 2)
        {
            printf("Scissors");
        }
        else if (user_attempt == 3){
            printf("Paper");
        }
        printf("\nCPU :: ");
        if(bot_attempt == 1)
        {
            printf("Rock");
        }
        else if (bot_attempt == 2)
        {
            printf("Scissors");
        }
        else if (bot_attempt == 3)
        {
            printf("Paper");
        }
        result = user_attempt - bot_attempt;
        if (result == -1 || result == 2)
        {
            printf("\nPlayer wins!");
            break;
        }
        else if (result == 0) 
        {
            printf("\nIt's a tie");
        }
        else
        {
            printf("\nCPU wins!");
        }
    }
    return 0;
}