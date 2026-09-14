#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void roll_stat(int stat[] , int size , int *result)
{
    *result = stat[rand() % size];
}
void bot_roll_stat(int bot_stat[] , int bot_size , int *bot_result)
{
    *bot_result = bot_stat[rand() % bot_size];
}
int main ()
{
    int stat[4] = {1100 , 2300 , 2500 , 3400 };
    int bot_stat[4] = {800 , 1400 , 1700 , 2200};
    int size = sizeof(stat) / sizeof(stat[0]);
    int bot_size = sizeof(bot_stat) / sizeof(bot_stat[0]);
    char choice;
    int atk , def , bot_atk , bot_def;
    
    srand(time(NULL));
    
    roll_stat(stat , size , &atk);
    roll_stat(stat , size , &def);
    bot_roll_stat(bot_stat , bot_size , &bot_atk);
    bot_roll_stat(bot_stat , bot_size , &bot_def);
    printf("Card battle!\n\n");

        printf("Player\n");
        printf("--------");
        printf("ATK :: %d       DEF :: %d\n\n", atk , def);
        
        printf("Opponent\n");
        printf("--------");
        printf("ATK :: %d       DEF :: %d\n\n", bot_atk , bot_def);
           
    do
    {

        printf("Switch player's ATK and DEF (y/n): ");
        scanf(" %c", &choice);
        if(choice == 'y')
        {
            int temp = atk;
            atk = def;
            def = temp;
        }
        if(choice != 'y' && choice != 'n')
        {
            printf("ERROR input\n\n");
        }
    
    } while (choice != 'y' && choice != 'n');
    
        printf("\nAttack calculating ATK vs ATK\n");
        if(atk > bot_atk)
        {
            printf("Opponent destroyed!");
        }
        else
        {
            printf("Player destroyed!");
        }
    return 0;
}