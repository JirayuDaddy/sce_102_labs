#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    int wallet;
    int bet;
    int result;
    char choice;
    char cont;

    srand(time(NULL));

    printf("Sic Bo Simulator\n");

    printf("Enter wallet amount: ");
    scanf("%d", &wallet);

    while (wallet > 0)
    {
        do
        {
            printf("Place your bet: ");
            scanf("%d", &bet);

            if (bet > wallet || bet <= 0)
            {
                printf("Invalid bet!\n");
            }

        } while (bet > wallet || bet <= 0);

        wallet = wallet - bet;

        do
        {
            printf("High 'H' (11-18) or Low 'L' (3-10): ");
            scanf(" %c", &choice);

        } while (choice != 'H' && choice != 'h' &&
                 choice != 'L' && choice != 'l');

        
        result = threeDices();

        printf("Three dices gave %d!\n", result);

        
        if ((choice == 'H' || choice == 'h') && result >= 11)
        {
            printf("You win!\n");

            
            wallet = wallet + (bet * 2);
        }
        else if ((choice == 'L' || choice == 'l') && result <= 10)
        {
            printf("You win!\n");

            wallet = wallet + (bet * 2);
        }
        else
        {
            printf("You lose!\n");
        }

        printf("Current wallet balance is %d\n", wallet);

        
        if (wallet == 0)
        {
            break;
        }

        do
        {
            printf("Continue? (y/n): ");
            scanf(" %c", &cont);

        } while (cont != 'y' && cont != 'Y' &&
                 cont != 'n' && cont != 'N');

        if (cont == 'n' || cont == 'N')
        {
            break;
        }
    }

    printf("Game over, please come again\n");

    return 0;
}