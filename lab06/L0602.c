#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int choice, com, done = 0;
    char *name[3] = {"Rock", "Scissors", "Paper"};

    srand(time(NULL));

    while(!done){
        printf("Rock - Scissors - Paper\n\n");
        printf("Rules\n");
        printf("----------------\n");
        printf("Rock > Scissors\n");
        printf("Scissors > Paper\n");
        printf("Paper > Rock\n\n");
        printf("Enter 1.Rock 2.Scissors 3.Paper : ");
        scanf("%d", &choice);

        if(choice != 1 && choice != 2 && choice != 3){
            printf("User :: Error Input\n\n");
            continue;
        }

        com = rand() % 3 + 1;

        printf("User :: %s\n", name[choice-1]);
        printf("CPU :: %s\n\n", name[com-1]);

        if(choice == com){
            printf("It's a tie!\n\n");
        }else if((choice==1 && com==2) || (choice==2 && com==3) || (choice==3 && com==1)){
            printf("Player wins!\n");
            done = 1;
        }else{
            printf("CPU wins!\n");
            done = 1;
        }
    }

    return 0;
}
