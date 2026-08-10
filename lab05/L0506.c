#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    int number_sum = 1;
    
    printf("Enter the number for factorial: ");
    scanf("%d", &number);
    
    for (number; number >= 1; number--){
    printf("%d", number);
    number_sum = number * number_sum;
    if (number > 1){
        printf(" * ");
    }
    if(number == 1){
        printf(" = %d", number_sum);
    }
}
    return 0;
}