#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int user, cpu;
srand(time(NULL));
printf("Rock - Scissors - Paper\n\n");
printf("Rules\n");
printf("-------------\n");
printf("Rock > Scissors\n");
printf("Scissors > Paper\n");
printf("Paper > Rock\n\n");
while (1) {
do {
printf("Enter 1.Rock 2.Scissors 3.Paper : ");
scanf("%d", &user);
} while (user < 1 || user > 3);
if (user == 1) {
printf("User :: Rock\n");
} else if (user == 2) {
printf("User :: Scissors\n");
} else if (user == 3) {
printf("User :: Paper\n");
}
cpu = rand() % 3 + 1;
if (cpu == 1) {
printf("CPU :: Rock\n");
} else if (cpu == 2) {
printf("CPU :: Scissors\n");
} else if (cpu == 3) {
printf("CPU :: Paper\n");
}
printf("\n");
if (user == cpu) {
printf("It's a tie!\n\n");
} else if ((user == 1 && cpu == 2) || (user == 2 && cpu == 3) || (user == 3 && cpu == 1)) {
printf("Player wins!\n");
break;
} else {
printf("CPU wins!\n");
break;
}
}

return 0;
}
