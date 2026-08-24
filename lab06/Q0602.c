#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
 
int main(void){
    int input=0,cpu=0;
    printf("Rock - Scissors - Paper");
    printf("\n\nRules");
    printf("\n---------------");
    printf("\nRock > Scissors");
    printf("\nScissors > Paper");
    printf("\nPaper > Rock\n");
    do{
        printf("\nEnter 1.Rock 2.Scissors 3.Paper : ");
        if(scanf("%d", &input) != 1){
            printf("User :: Error Input\n");
            return 1;
        }
        if(input>3 || input <1){
            printf("User :: Error Input\n");
            continue;
        }
        cpu = (rand() % 3)+1;
        if(input==cpu){
            switch(input){
                case(1):
                printf("User :: Rock\n");
                printf("CPU :: Rock\n");
                break;
                case(2):
                printf("User :: Scissors\n");
                printf("CPU :: Scissors\n");
                break;
                case(3):
                printf("User :: Paper\n");
                printf("CPU :: Paper\n");
                break;
            }
            printf("It's a tie!\n");
        }
    }while(input==cpu || input>3 || input <1);
       
    if(input-cpu==-1 || input-cpu ==2){
        if(input==1){
            printf("\nUser :: Rock\nCPU :: Scissors");
        }
        else if(input==2){
            printf("\nUser :: Scissors\nCPU :: Paper");
        }
        else{
            printf("\nUser :: Paper\nCPU :: Rock");
        }
        printf("\nPlayer wins!");
    }
    else {
        if(input==1){
            printf("\nUser :: Rock\nCPU :: Paper");
        }
        else if(input==2){
            printf("\nUser :: Scissors\nCPU :: Rock");
        }
        else{
            printf("\nUser :: Paper\nCPU :: Scissors");
        }
        printf("\nCPU wins!");
    }
    return 0;
}