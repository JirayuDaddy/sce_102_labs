#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showChoice(int choice)
{
    if (choice == 1)
        printf("Rock");
    else if (choice == 2)
        printf("Scissors");
    else if (choice == 3)
        printf("Paper");
}

int checkWinner(int user, int cpu)
{
    if (user == cpu)
        return 0; 

    if ((user == 1 && cpu == 2) ||
        (user == 2 && cpu == 3) ||
        (user == 3 && cpu == 1))
        return 1; 

    return 2; 
}

int main()
{
    int user, cpu;
    int result;

    srand(time(NULL));

    printf("Rock - Scissors - Paper\n\n");

    printf("Rules\n");
    printf("------------\n");
    printf("Rock > Scissors\n");
    printf("Scissors > Paper\n");
    printf("Paper > Rock\n\n");

    printf("Enter 1.Rock 2.Scissors 3.Paper : ");
    scanf("%d", &user);

    cpu = rand() % 3 + 1;
    printf("\nUser :: ");
    showChoice(user);

    printf("\nCPU :: ");
    showChoice(cpu);

    result = checkWinner(user, cpu);

    printf("\n\n");
    if (result == 0)
        printf("It's a tie!\n");
    else if (result == 1)
        printf("Player wins!\n");
    else
        printf("CPU wins!\n");
    return 0;
}