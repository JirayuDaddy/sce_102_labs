#include <stdio.h>

int main() {
    int number;
    int sum_number = 1;
    int start_number = 1;

    printf("Enter the number for factorial: ");
    scanf("%d", &number);

    for(number; number >= start_number; number--){
        printf("%d", number);
    sum_number *= number;

        if(number != 1){
        printf(" * ");
        }
    }

    printf(" = %d", sum_number);

 

    return 0;
}