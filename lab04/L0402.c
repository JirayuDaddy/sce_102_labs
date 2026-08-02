#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number x : ");
    scanf("%d", &number);
    if(number<0){
        printf("\nMinus Number");
    }
    else{
        printf("Just Number");
    }
    return 0;
    
}