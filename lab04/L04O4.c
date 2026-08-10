#include <stdio.h>
#include <stdlib.h>

    int main(){

        int num;

        printf("Enter number x: ");
        scanf("%d", &num);
        if(num < 0){
            printf("Minus NUmber");
        }
        else if(num == 0){
             printf("It's \"Zero\"");
        }
        else{
             printf("Pluse NUmber");
            
                if(num > 1000){
                    printf("\n\"Very Large Number\"");
                }
                else if(num > 100){
                    printf("\n\"Large Nmber\"");
                }
                else{
                    printf("\n\"Nominal Range\"");
                }
            }
        return 0;
}