#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int threeDices(void)
{
    int d1 = rand() % 6 + 1;
    int d2 = rand() % 6 + 1;
    int d3 = rand() % 6 + 1;
    return d1 + d2 + d3;
}

int main(void)
{
    int wallet, bet;
    int total;
    char choice, continueGame;

    srand((unsigned int)time(NULL));

    printf("Sic Bo Simulator\n\n");
    printf("Enter wallet amount: ");
    scanf("%d", &wallet);

    while (wallet > 0)
    {
        printf("\nPlace your bet: ");
        scanf("%d", &bet);

        while (bet > wallet)
        {
            printf("Insufficient funds. Please enter a smaller bet: ");
            scanf("%d", &bet);
        }

        do
        {
            printf("High 'H' (11-18) or Low 'L' (3-10): ");
            scanf(" %c", &choice);
        } while (choice != 'H' && choice != 'h' && choice != 'L' && choice != 'l');

        total = threeDices();
        printf("Three dices gave %d!\n", total);

        if ((choice == 'H' || choice == 'h') && total >= 11 && total <= 18)
        {
            printf("You win!\n");
            wallet += bet;
        }
        else if ((choice == 'L' || choice == 'l') && total >= 3 && total <= 10)
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

        if (wallet == 0)
        {
            break;
        }

        do
        {
            printf("Continue? (y/n): ");
            scanf(" %c", &continueGame);
        } while (continueGame != 'y' && continueGame != 'Y' && continueGame != 'n' && continueGame != 'N');

        if (continueGame == 'n' || continueGame == 'N')
        {
            break;
        }
    }

    printf("\nGame over, please come again\n");
    return 0;
}
