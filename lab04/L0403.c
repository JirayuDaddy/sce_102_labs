#include <stdio.h>
#include <stdlib.h>
int main(){
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num<0){
        printf("Minus number.\n");
    }
    else if(num==0){
        printf("It's Zero.\n");
    }
    else{
        printf("Plus number.\n");
    }
    return 0;
}