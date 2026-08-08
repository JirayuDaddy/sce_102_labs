#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int threeDices()
{
    int dices = 0;
    int dices_sum = 0;
    int amount_roll = 1;

    for (amount_roll = 1; amount_roll <= 3; amount_roll++)
    {
        dices = rand() % 6 + 1;
        dices_sum += dices;
    }
    return dices_sum;
}
int main()
{
    int money = 0;
    int bet = 0;
    char HL = 0;
    char continuee = 'y';
    int sum = 0;

    srand(time(NULL));
    printf("Sic Bo Simulator");
    printf("\n\nEnter wallet amount: ");
    scanf("%d", &money);
    do
    {
        printf("\nPlace your bet: ");
        scanf("%d", &bet);
        do
        {
            printf("High 'H' (11-18) or low 'L' (3-10): ");
            scanf(" %c", &HL);
        }
        while ((HL != 'H') && (HL != 'L'));
        sum = threeDices();
        printf("Three dices gave %d!\n", sum);
        if ((HL == 'H' && sum >= 11 && sum <= 18) || (HL == 'L' && sum >= 3 && sum <= 10))
        {
            money += bet;
            printf("\nYou win!\n\n");
        }
        else
        {
            money -= bet;
            printf("\nYou lose!\n\n");
        }
        printf("Current wallet balance is %d\n", money);
        if (money <= 0)
        {
            break;
        }
        printf("\nContinue? (y/n): ");
        scanf(" %c", &continuee);
    }
    while (continuee == 'y' || continuee == 'Y');
    return 0;
}