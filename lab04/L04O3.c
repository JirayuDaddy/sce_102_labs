#include <stdio.h>
#include <stdlib.h>

int main() {

    int number ;

    printf("Enter number : ");
    scanf("%d",&number);

    if(number<0) {
        printf("Minus Number");
    }
    else if(number==0) {
        printf("It's Zero");
    }
    else{
        printf("Plus Number",number);
    }
    return 0 ;
}