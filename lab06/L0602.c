#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int  User , Cpu;
srand(time(NULL));

    printf("Rock - Scissors - Paper\n\n");
    printf("Rules\n");
    printf("-------------\n");
    printf("Rock > Scissors\n");
    printf("Scissors > Paper\n");
    printf("Paper > Rock\n\n");

    while (1)
    { 
        printf("Enter 1.Rock 2.Scissors 3.Paper : ");
        scanf("%d",&User);
        if (User < 1 || User > 3 ){
        continue;
    }
        Cpu=(rand()%3)+1;

        printf("User :: ");
        if (User == 1) printf("Rock\n");
        else if (User == 2) printf("Scissors\n");
        else if (User == 3) printf("paper\n");

        printf("Cpu :: ");
        if (Cpu == 1) printf("Rock\n");
        else if (Cpu == 2) printf("Scissors\n");
        else if(Cpu == 3) printf("paper\n");

        printf("\n");

        if(User==Cpu){
        printf("Is's A Tie! \n ");
        }
        else if ((User ==1 && Cpu == 2)||(User ==2 && Cpu== 3)||(User ==3 && Cpu==1)){
        printf("User Winer \n");
        break;
        }
        else{
            printf("Cpu Winer \n ");
            break;
        }
    }
    return 0;
}