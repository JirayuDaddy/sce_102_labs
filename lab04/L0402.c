#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num<0){
        printf("Minus number.\n");
    }else{
        printf("Just Number.\n");
    }
    return 0;
}