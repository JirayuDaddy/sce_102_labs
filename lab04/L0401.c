#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num<0){
        printf("Negative number.\n");
    }
    else if(num==0){
        printf("Zero.\n");
    }
    else{
        printf("Positive number.\n");
    }
    return 0;
}