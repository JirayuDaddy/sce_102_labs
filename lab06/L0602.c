#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int x, y;
    printf("Rock - Scissors - Paper\n");
    printf("\nRules\n------------\n");
    printf("Rock > Scissors\nScissours > Paper\nPaper > Rock\n");
    do{
        do{
        printf("\nEnter 1.Rock 2.Scissors 3.Paper : ");
        scanf("%d",&x);
        printf("User :: ");
        switch(x){
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
    }while(x>3 || x<1);
        y=rand()%3+1;
        printf("CPU ::");
        switch(x){
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
    if(x==y){
    printf("\nIt's a tie!\n");
    }
    }while(x==y);
    if(x==3&&y==1){
        y=4;
    }
    if(x==1&&y==3){
        y=-1;
    }
    if(x<y){
        printf("\nPlayer wins\n");
    }
    else{
        printf("\nCPU wins!\n");
    }
    return 0;
}