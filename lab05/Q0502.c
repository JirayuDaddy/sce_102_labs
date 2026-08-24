#include <stdio.h>

int main(void){
    int number;
    do{
        printf("Enter number: ");
        scanf("%d", &number);
    }while(number >= 0);
    printf("\nData receiving ended\n");
    return 0;
}