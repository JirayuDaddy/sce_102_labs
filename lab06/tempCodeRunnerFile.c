#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main() {
    
    int x,CPU;

    srand(time(NULL));
    
    printf("Rock - Scissors - Paper\n");
    printf("\n");
    printf("Rules\n");
    printf("-----------------\n");
    printf("Rock > Scissors\n");
    printf("Scissors > Paper\n");
    printf("Paper > Rock\n");
    printf("\n");

    while (1) {
        printf("Enter 1.Rock 2.Scissors 3.Paper : ");
        scanf("%d",&x);
        if (x < 1 || CPU > 3 ) {
        continue;
        }
        CPU = rand()%3+1 ;
        
        printf("User :: ") ;
        if(x == 1) {
        printf("Rock\n") ;
        }
        else if(x == 2) {
        printf("Scissors\n") ;
        }
        else if(x == 3) {
        printf("Paper\n") ;
        }
        
        printf("CPU :: ");
        if(CPU == 1) {
        printf("Rock\n") ;
        }
        else if(CPU == 2) {
        printf("Scissors\n") ;
        }
        else if(CPU == 3) {
        printf("Paper\n") ;
        }

        printf("\n");
        if(x == CPU) {
            printf("It's a tie!");
        }
        else if((x == 1 && CPU == 2) || (x == 2 && CPU == 3) || (x == 3 && CPU == 1)) {
            printf("Player wins! ");
            break;
        }
        else {
            printf("CPU wins!");
            break;
        }
    }
    return 0 ;
}

