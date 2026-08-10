#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int threeDices()
{
    int dice1,dice2,dice3;
    int result =0;
    srand(time(NULL));
    dice1 = rand()%6+1;
    dice2 = rand()%6+1;
    dice3 = rand()%6+1;
    result = dice1 + dice2 + dice3 ;
    return result;
}




int main()
{

    char _continue,guess;
    int dice,wallet,bet;
    printf("Sic Bo Simulator");
    printf("\nEnter wallet amount : ");
    scanf("%d",&wallet);
    printf("\nPlace your bet : ");
    scanf("%d",&bet);
    dice = threeDices();
    while (wallet >0)
    {
    printf("\nHigh 'H' (11-18) or Low 'L' (3-10) : ");
    scanf(" %c",&guess);
    
    if(guess == 'H')
    {
        if(dice>=11)
        {
            printf("\nYou Wins!");
            wallet = wallet + bet;

        }
        else
        {
            printf("\nYou lose!");
            wallet = wallet - bet;

        }
        printf("\nCurrent wallet balance is %d",wallet);
        if(wallet > 0)
        {
        while (_continue != 'y' && _continue != 'n')
        {
        printf("Continue? (y/n) : ");
        scanf(" %c",&_continue);
        }
        if (_continue == 'n')
        {
            printf("Game over,please come again");
            break;
        }
        else if (_continue == 'y')
        {
            continue;
        }
    }
    else if (guess == 'L')
    {
        if(dice<11)
        {
            printf("\nYou Wins!");
            wallet = wallet + bet;
        }
        else
        {
            printf("\nYou lose!");
            wallet = wallet - bet;
        }
        printf("\nCurrent wallet balance is %d",wallet);
        if(wallet >=0)
        {
            printf("\nContinue? (y/n) : ");
            scanf(" %c",&_continue);
            if(_continue == 'y')
            {
                continue;
            }
            else if (_continue == 'n')
            {
                printf("\nGame over, please come again");
                break;
            }
        }
    }
}
    return 0;
}
}
