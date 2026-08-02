#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number x: ");
    scanf("%d", &number);
    if (number<0){
        printf("Minus Number");
    }
    else if(number>=1000){
        printf("Plus Number\n\"Very Large Number\"");
    }
    else if(number>=100){
        printf("Plus Number\n\"Large Number\"");
    }
    else if(number>0){
        printf("Plus Number\n\"Nominal Number");
    }
    else{
        printf("It's \"Zero\"");
    }

    return 0;
}