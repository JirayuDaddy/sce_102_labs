#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int user,cpu;
    printf("Rock - Scissors - Paper\n\n");
    printf("Rules\n---------------\n");
    printf("Rock > Scissors\nScissors > Paper\nPaper > Rock\n\n");
    do{
        do{
            printf("Enter 1.Rock 2.Scissors 3.Paper : ");
            scanf("%d", &user);
            printf("User :: ");
            switch(user){
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
        }while(user>3 || user<1);
        cpu = rand() % 3 + 1;
        printf("CPU :: ");
        switch(cpu){
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
        if(user==cpu){
            printf("\nIt's a tie!\n");
        }
    }while(user==cpu);
    if(user==3&&cpu==1){
        cpu=4;
    }
    if(user==1&&cpu==3){
        cpu=-1;
    }
    if(user<cpu){
        printf("\nPlayer wins!");
    }else{
        printf("\nCPU wins!");
    }
    return 0;
}