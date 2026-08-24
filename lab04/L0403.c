#include <stdio.h>
#include <stdlib.h>

int main(){
    int x=0;
    printf("Enter number x: ");
    scanf("%d",&x);
    if(x<0){
        printf("Minus number");
    }
    else if(x>0){
        printf("Plus number");
    }
    else{
        printf("It's \"Zero\"");
    }
    return 0;
}