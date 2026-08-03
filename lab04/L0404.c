#include <stdio.h>
int main() {
    int Num ;
    printf("Enter You Number: ");
    scanf("%d",&Num);
    if(Num<0){
        printf("Minus Number");
    }
    else if(Num==0){
        printf("It's Zero");
    }
      else if(Num<=99){
        printf("Nominal Range");
    }
    else if(Num<=999){
        printf("Nominal Range");
    }
    else if(Num<=1000){
        printf("Very Large Number");
    }
    return 0;