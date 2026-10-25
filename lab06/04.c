#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int threeDices() {
int dice1 = rand() % 6 + 1;
int dice2 = rand() % 6 + 1;
int dice3 = rand() % 6 + 1;
return dice1 + dice2 + dice3;
}
int main() {
int wallet, bet, sum;
char choice, cont;
srand(time(NULL));
printf("Sic Bo Simulator\n\n");
printf("Enter wallet amount: ");
scanf("%d", &wallet);
while (wallet > 0) {
printf("\n");
do {
printf("Place your bet: ");
scanf("%d", &bet);
} while (bet > wallet || bet <= 0);
do {
printf("High 'H' (11-18) or Low 'L' (3-10): ");
scanf(" %c", &choice);
} while (choice != 'H' && choice != 'h' && choice != 'L' && choice != 'l');
sum = threeDices();
printf("Three dices gave %d!\n", sum);
if ((sum >= 11 && sum <= 18 && (choice == 'H' || choice == 'h')) ||
(sum >= 3 && sum <= 10 && (choice == 'L' || choice == 'l'))) {
printf("You win!\n");
wallet += bet;
} else {
printf("You lose!\n");
wallet -= bet;
}
printf("\nCurrent wallet balance is %d\n\n", wallet);
printf("Continue? (y/n): ");
scanf(" %c", &cont);
if (cont == 'n' || cont == 'N' || wallet <= 0) {
break;
}
}
return 0;
}