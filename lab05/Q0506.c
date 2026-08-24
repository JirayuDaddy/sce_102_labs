#include <stdio.h>

int main(void){
    int number;
    long long factorial = 1;
    printf("Enter the number for factorial: ");
    scanf("%d", &number);
    for(int current = number; current >= 1; current--){
        printf("%d", current);
        factorial *= current;
        if(current > 1){
            printf(" * ");}}
    if(number == 0){
        printf("0");}
    printf(" = %lld\n", factorial);
    return 0;
}