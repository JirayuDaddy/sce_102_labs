#include <stdio.h>
int main(void){
    int highest_number;
    long long factorial = 1;
    long long summation = 0;
    printf("Enter the highest number for factorial: ");
    scanf("%d", &highest_number);
    printf("\nFactorial results\n");
    for(int number = 1; number <= highest_number; number++){
        factorial *= number;
        printf("\n%d! = ", number);
        for(int current = number; current >= 1; current--){
            printf("%d", current);
            if(current > 1){
                printf(" * ");}}
        printf(" = %lld\n", factorial);}
    printf("\nSummation of factorial results\n\n");
    factorial = 1;
    for(int number = 1; number <= highest_number; number++){
        factorial *= number;
        summation += factorial;
        printf("%lld", factorial);
        if(number < highest_number){
            printf(" + ");}}
    printf(" = %lld\n", summation);
    return 0;
}