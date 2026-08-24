#include <stdio.h>

int main(void){
    printf("List of odd number :: ");
    for(int number = 1; number <= 100; number++){
        if(number % 2 != 0){
            printf("%d ", number);
        }
    }
    printf("\n\nList of even number :: ");
    for(int number = 1; number <= 100; number++){
        if(number % 2 == 0){
            printf("%d ", number);
        }
    }
    return 0;
}