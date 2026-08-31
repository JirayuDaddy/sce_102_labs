#include <stdio.h>
#include <stdlib.h>

int threeDices(){
    int sc;
    sc=rand()%16+3;
    return sc;
}

int main()
{
    int wallet, bet, sc;
    char b_ch, g_ch;
    printf("Sic Bo Simulator\n\n");
    printf("Enter wallet amount: ");
    scanf("%d",&wallet);
    do{
        printf("\nPlace your bet: ");
        scanf("%d",&bet);
        sc=threeDices();
        do{
            printf("High 'H' (11-18) or Low 'L' (3-10): ");
            scanf(" %c",&b_ch);
        }while(b_ch!='H'&&b_ch!='L');
        printf("Three dices gave %d!\n", sc);
        if(b_ch=='H'&&sc>=11){
            printf("You win!\n");
            wallet+=bet;
        }
        else if(b_ch=='L'&&sc<=10){
            printf("You win!\n");
            wallet+=bet;
        }
        else{
            printf("You lose!\n");
            wallet-=bet;
        }
        printf("\nCurrent wallet balance is %d\n\n",wallet);
        do{
            printf("Continue? (y/n): ");
            scanf(" %c",&g_ch);
        }while(g_ch!='y'&&g_ch!='n');
    }while(g_ch!='n'&&wallet>0);
    printf("\n\nGame over, please come again\n");
    return 0;
}