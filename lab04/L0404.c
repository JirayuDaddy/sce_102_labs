#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    printf("Enter number x: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Minus Number");
    } else if (number > 0) {
        printf("Plus number\n");
        if (number >= 1000) {
            printf("\"Very Large Number\"");
        } else if (number >= 100) {
            printf("Large Number");
        } else {
            printf("Nominal Range");
        }
    } else {
        printf("It's \"Zero\"");
    }

    return 0;
}
