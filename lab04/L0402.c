#include <stdio.h>
int main() {
    int Num ;
    printf("Enter You Number: ");
    scanf("%d",&Num);
    if(Num<0){
        printf("Minus Number");
    }
    else if(Num>0){
        printf("Just Number");
    }
    return 0;