#include <stdio.h>
#include <stdlib.h>

int main() {

    int number ;

    printf("Enter number : ");
    scanf("%d",&number);

    if(number<0) {
        printf("Minus Number");
    }
    return 0 ;
}