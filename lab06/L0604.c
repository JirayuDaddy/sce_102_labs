#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int threeDices(){
    int a = rand() % 6 + 1;
    int b = rand() % 6 + 1;
    int c = rand() % 6 + 1;
    return a + b + c;
}

int main(){
    int money, bet, total;
    char guess, again;

    srand(time(NULL));

    printf("Sic Bo Simulator\n\n");
    printf("Enter wallet amount: ");
    scanf("%d", &money);

    while(money > 0){

        printf("\nPlace your bet: ");
        scanf("%d", &bet);
        while(bet > money){
            printf("Place your bet: ");
            scanf("%d", &bet);
        }

        printf("High 'H' (11-18) or Low 'L' (3-10): ");
        scanf(" %c", &guess);
        while(guess != 'H' && guess != 'L'){
            printf("High 'H' (11-18) or Low 'L' (3-10): ");
            scanf(" %c", &guess);
        }

        total = threeDices();
        printf("Three dices gave %d!\n", total);

        if((guess == 'H' && total >= 11 && total <= 18) || (guess == 'L' && total >= 3 && total <= 10)){
            printf("You win!\n");
            money = money + bet;
        }else{
            printf("You lose!\n");
            money = money - bet;
        }

        printf("\nCurrent wallet balance is %d\n", money);

        printf("\nContinue? (y/n): ");
        scanf(" %c", &again);
        while(again != 'y' && again != 'n'){
            printf("Continue? (y/n): ");
            scanf(" %c", &again);
        }

        if(again == 'n')
            break;
    }

    printf("\n\nGame over, please come again\n");

    return 0;
}
