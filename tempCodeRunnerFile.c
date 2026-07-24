
#include <stdio.h>

int main() {
    int num;

    printf("Enter number x: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Minus Number\n");
    }
    else if (num == 0) {
        printf("It's \"Zero\"\n");
    }
    else {
        printf("Plus Number\n");

        if (num > 1000) {
            printf("\"Very Large Number\"\n");
        }
        else if (num > 100) {
            printf("\"Large Number\"\n");
        }
        else {
            printf("\"Nominal Range\"\n");
        }
    }

    return 0;
}