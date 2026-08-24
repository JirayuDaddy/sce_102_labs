#include <stdio.h>
#include <stdlib.h>

int main(){
    int x=0;
    printf("Enter number x:");
    scanf("%d",&x);
    if(x<0){
        printf("Minus Number");
    }
    else if(x==0){
        printf("it's \"Zero\"");
    }
    else{
        printf("Plus number");
        if(x<100){
            printf("\nNominal Range");
        }
        else if(x<1000){
            printf("\nLarge Number");
        }
        else{
            printf("\nVery Large Number");
        }
    }
    return 0;
}