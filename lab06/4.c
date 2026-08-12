#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int threeDices() {
    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;
    int dice3 = (rand() % 6) + 1;
    return dice1 + dice2 + dice3;
}

int main() {
   
    srand(time(NULL));

    int wallet = 0;
    int bet = 0;
    char choice;
    char playAgain = 'y';

    printf("Sic Bo Simulator\n\n");

  
    printf("Enter wallet amount: ");
    scanf("%d", &wallet);

    while (wallet > 0 && (playAgain == 'y' || playAgain == 'Y')) {
     
        while (1) {
            printf("\nPlace your bet: ");
            scanf("%d", &bet);

            if (bet > wallet) {
               
                continue; 
            } else if (bet <= 0) {
                printf("Please enter a valid bet greater than 0.\n");
            } else {
                break;
            }
        }

      
        while (getchar() != '\n'); 

        printf("High 'H' (11-18) or Low 'L' (3-10): ");
        scanf("%c", &choice);

       
        int sumDice = threeDices();
        printf("Three dices gave %d!\n", sumDice);


        int isHigh = (sumDice >= 11 && sumDice <= 18);
        int isLow = (sumDice >= 3 && sumDice <= 10);

        int win = 0;
        if ((choice == 'H' || choice == 'h') && isHigh) {
            win = 1;
        } else if ((choice == 'L' || choice == 'l') && isLow) {
            win = 1;
        }

        if (win) {
            printf("You win!\n");
            wallet += bet; 
        } else {
            printf("You lose!\n");
            wallet -= bet; 
        }

        printf("\nCurrent wallet balance is %d\n", wallet);

        if (wallet <= 0) {
            break;
        }

  
        while (getchar() != '\n'); 
        printf("\nContinue? (y/n): ");
        scanf("%c", &playAgain);
    }

    printf("\nGame over, please come again\n");

    return 0;
}