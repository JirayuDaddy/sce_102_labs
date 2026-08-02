#include <stdio.h>
#include <stdlib.h> 

int main() {

    int number ;
    printf("List of ood number :: ");
    for(number=1;number<100;number=number+2) {
        printf("%d",number);
    }
    printf("List of ood number :: ");
    for(number=2;number<100;number=number+2) {
        printf("%d",number);
    }
    return 0 ;
}