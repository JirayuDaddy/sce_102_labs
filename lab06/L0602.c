#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int userput, cpuput;
    printf("Rock - Scissors - Paper\n");
    printf("\nRules\n---------------\n");
    printf("Rock > Scissors\nScissors > Paper\nPaper > Rock\n");
    do
    {
        do
        {
            printf("\nEnter 1.Rock 2.Scissors 3.Paper : ");
            scanf("%d", &userput);
            printf("User :: ");
            switch (userput)
            {
            case 1:
                printf("Rock\n");
                break;
            case 2:
                printf("Scissors\n");
                break;
            case 3:
                printf("Paper\n");
                break;
            default:
                printf("Error Input\n");
            }
        } while (userput > 3 || userput < 1);
        cpuput = rand() % 3 + 1;
        printf("CPU :: ");
        switch (cpuput)
        {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Scissors\n");
            break;
        case 3:
            printf("Paper\n");
            break;
        default:
            printf("Error Input\n");
        }
        if (userput == cpuput)
        {
            printf("\nIt's a tie!\n");
        }
    } while (userput == cpuput);
    if (userput == 3 && cpuput == 1)
    {
        cpuput = 4;
    }
    if (userput == 1 && cpuput == 3)
    {
        cpuput = -1;
    }
    if (userput < cpuput)
    {
        printf("\nPlayer wins!\n");
    }
    else
    {
        printf("\nCPU wins!\n");
    }
    return 0;
}
