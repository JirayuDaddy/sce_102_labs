#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int user_in, cpu_in;
    printf("Rock - Scissors - Paper\n");
    printf("\nRules\n---------------\n");
    printf("Rock > Scissors\nScissors > Paper\nPaper > Rock\n");
    do{
        do{
            printf("\nEnter 1.Rock 2.Scissors 3.Paper : ");
            scanf("%d", &user_in);
            printf("User :: ");
            switch(user_in){
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
        }while(user_in>3 || user_in<1);
        cpu_in=rand()%3+1;
        printf("CPU :: ");
        switch(cpu_in){
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
        if(user_in==cpu_in){
            printf("\nIt's a tie!\n");
        }
    }while(user_in==cpu_in);
    if(user_in==3&&cpu_in==1){
        cpu_in=4;
    }
    if(user_in==1&&cpu_in==3){
        cpu_in=-1;
    }
    if(user_in<cpu_in){
        printf("\nPlayer wins!\n");
    }
    else{
        printf("\nCPU wins!\n");
    }
    return 0;
}