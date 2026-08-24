#include <stdio.h>
#include <stdlib.h>

int main() {
    int x=0;
    printf("Enter number x: ");
    scanf("%d",&x);
    if (x<0){
        printf("Minus number");
    }
    return 0;
}