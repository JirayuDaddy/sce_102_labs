#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("minus number");
    } else if (number > 0) {
        printf("just number");
    } else {
        printf("zero");
    }

    return 0;
}