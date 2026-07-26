#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("Plus number\n");
        if (number >= 1000) {
            printf("\"Very Large number\"\n");
        }
        else if (number >= 100) {
            printf("\"Large number\"\n");
        }
        else {
            printf("\"Nominal Range\"\n");
        }
    }
    else if (number < 0) {
        printf("Minus number\n");
    }
    else {
        printf("It's Zero\n");
    }
    return 0;
}