#include <stdio.h>
#include <stdlib.h> 

int main() {

    int number ;
    do {
    printf("Enter number : ");
    scanf("%d",&number);
    }while (number >= 0) ;
        printf("Data receiving ended");
    return 0 ;
}