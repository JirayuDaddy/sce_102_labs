#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int user, cpu;
    printf("Rock - Paper - Scissors\n");
    printf("\n");
    printf("Rules\n");
    printf("--------------------\n");
    printf("Rock > paper\n");
    printf("Paper > scissors\n");
    printf("Scissors > rock\n");
    printf("\n");
do {
    printf("Enter 1.Rock 2.Paper  3.Scissors: ");
    scanf("%d", &user);
    cpu = rand() % 3 + 1;   
 switch (user)
        {
        case 1:
            printf("cpu: Rock\n");
            break;
        case 2:
            printf("cpu: Paper\n");
            break;
        case 3:
            printf("cpu: Scissors\n");
            break;
        default:
            printf("Error input\n");
        }
}while (user < 1 || user > 3);
cpu = rand() % 3 + 1;   
    switch (cpu)
    {
        case 1:
            printf("cpu: Rock\n");
            break;
        case 2:
            printf("cpu: Paper\n");
            break;
        case 3:
            printf("cpu: Scissors\n");
            break;
        default:
            printf("Error input\n");
    }
    if (user == cpu) {
        printf("it's tie\n");
    } else if ((user == 1 && cpu == 3) || (user == 2 && cpu == 1) || (user == 3 && cpu == 2)) {
        printf("You win!\n");
    } else {
        printf("CPU wins!\n");
    }

return 0;
}
