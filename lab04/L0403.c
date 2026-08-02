#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter Number x : ");
    scanf("%d", &number);
    if(number<0){
        printf("\nMinus Number");
    }
    else if(number>0){
        printf("\nPlus Number");
    }
    else if(number==0){
        printf("It's Zero");
    }
    return 0;

}