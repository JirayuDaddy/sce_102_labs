#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int threeDices(void){
    return rand() % 6+1 +rand() % 6+1 +rand() % 6+1;
}

int main(void){
    int wallet, bet, total;
    char choice, again;
    srand((unsigned)time(NULL));
    printf("Sic Bo Simulator\n\nEnter wallet amount: ");
    while(scanf("%d", &wallet) != 1 || wallet <= 0){
        int character;
        while((character = getchar()) != '\n' && character != EOF);
        printf("Enter wallet amount: ");
    }
    while(wallet > 0){
        printf("\nPlace your bet: ");
        while(scanf("%d", &bet) != 1 || bet <= 0 || bet > wallet){
            int character;
            while((character = getchar()) != '\n' && character != EOF);
            printf("Place your bet: ");
        }
        printf("High 'H' (11-18) or Low 'L' (3-10): ");
        while(scanf(" %c", &choice) != 1 ||
              (choice != 'H' && choice != 'h' && choice != 'L' && choice != 'l')){
            int character;
            while((character = getchar()) != '\n' && character != EOF);
            printf("High 'H' (11-18) or Low 'L' (3-10): ");
        }
        total = threeDices();
        printf("Three dices gave %d!\n", total);
        wallet -= bet;
          if(((choice == 'H' || choice == 'h') && total >= 11) ||
              ((choice == 'L' || choice == 'l') && total <= 10)){
            wallet += bet * 2;
            printf("You win!\n");
        }else{
            printf("You lose!\n");
        }
        printf("\nCurrent wallet balance is %d\n", wallet);
        printf("\nContinue? (y/n): ");
        while(scanf(" %c", &again) != 1 ||
              (again != 'y' && again != 'Y' && again != 'n' && again != 'N')){
            int character;
            while((character = getchar()) != '\n' && character != EOF);
            printf("Continue? (y/n): ");
        }
        if(again == 'n' || again == 'N')
            break;
    }
    printf("\n\nGame over, please come again\n");
    return 0;
}
