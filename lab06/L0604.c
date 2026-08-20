#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int threeDices();
int threeDices()
{
   int dice1, dice2, dice3;
   dice1 = rand() % 6 + 1;
   dice2 = rand() % 6 + 1;
   dice3 = rand() % 6 + 1;
   return dice1 + dice2 + dice3;
}
int main()
{
   int wallet, bet, total;
   char choice, con;
   srand(time(NULL));
   printf("Sic Bo Simulator\n\n");
   printf("Enter wallet amount: ");
   scanf("%d", &wallet);
   while(wallet > 0)
   {
       printf("\nPlace your bet: ");
       scanf("%d", &bet);
       while(bet > wallet || bet <= 0)
       {
           printf("Place your bet: ");
           scanf("%d", &bet);
       }
       printf("High 'H' (11-18) or Low 'L' (3-10): ");
       scanf(" %c", &choice);
       while(choice != 'H' && choice != 'h' &&
             choice != 'L' && choice != 'l')
       {
           printf("High 'H' (11-18) or Low 'L' (3-10): ");
           scanf(" %c", &choice);
       }
       total = threeDices();
       printf("Three dices gave %d!\n", total);
       if((choice == 'H' || choice == 'h') && total >= 11)
       {
           printf("You win!\n");
           wallet = wallet + bet;
       }
       else if((choice == 'L' || choice == 'l') && total <= 10)
       {
           printf("You win!\n");
           wallet = wallet + bet;
       }
       else
       {
           printf("You lose!\n");
           wallet = wallet - bet;
       }
       printf("\nCurrent wallet balance is %d\n", wallet);
       if(wallet <= 0)
       {
           break;
       }
       printf("\nContinue? (y/n): ");
       scanf(" %c", &con);
       if(con == 'n' || con == 'N')
       {
           break;
       }
   }
   printf("\nGame over, please come again\n");
   return 0;
}