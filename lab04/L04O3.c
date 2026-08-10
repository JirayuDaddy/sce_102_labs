#include <stdio.h>
#include <stdlib.h>
    int main(){
        int num;

        printf("Enter number x: ");
        scanf("%d", &num);
        if(num < 0)
        printf("Minus Number");
            
            else if(num == 0)
            printf("It's \"Zero\"");

            else if(num >= 1)
            printf("Plus NUmber");

        return 0;
    }