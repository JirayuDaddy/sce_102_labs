#include <stdio.h>

int main(){
    int num;
    printf("Enter number x: ");
    scanf("%d", &num);
    if(num<0){
        printf("Minus Number\n");
    }
    else{
        printf("Just Number\n",num);
    }
    return 0;
}