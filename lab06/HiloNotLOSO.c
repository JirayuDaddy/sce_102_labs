#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int wallet;
    int bet;
    int dice1, dice2, dice3;
    int total;
    char choice;
    char cont;

    srand(time(NULL));

    printf("Sic Bo Simulator\n\n");

    printf("Enter wallet amount: ");
    scanf("%d", &wallet);

    while (wallet > 0)
    {
        printf("\nCurrent wallet balance is %d\n\n", wallet);

        printf("Place your bet: ");
        scanf("%d", &bet);

        // Check valid bet
        while (bet > wallet || bet <= 0)
        {
            printf("Invalid bet. Enter again: ");
            scanf("%d", &bet);
        }

        printf("High 'H' (11-18) or Low 'L' (3-10): ");
        scanf(" %c", &choice);

        // Convert lowercase to uppercase
        if (choice == 'h')
            choice = 'H';
        if (choice == 'l')
            choice = 'L';

        // Roll dice
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        dice3 = rand() % 6 + 1;

        total = dice1 + dice2 + dice3;

        printf("Three dices gave %d!\n", total);

        // Determine win or lose
        if ((choice == 'H' && total >= 11 && total <= 18) ||
            (choice == 'L' && total >= 3 && total <= 10))
        {
            printf("You win!\n");
            wallet += bet;
        }
        else
        {
            printf("You lose!\n");
            wallet -= bet;
        }

        printf("\nCurrent wallet balance is %d\n", wallet);

        if (wallet <= 0)
        {
            break;
        }

        printf("\nContinue? (y/n): ");
        scanf(" %c", &cont);

        if (cont == 'n' || cont == 'N')
        {
            break;
        }
    }

    printf("\nGame over, please come again\n");

    return 0;
}