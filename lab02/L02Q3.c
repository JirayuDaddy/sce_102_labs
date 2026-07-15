#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(i = 1; i <= 12; i++) {
        printf("%d * %d = %d\n", number, i, number*i);
    }

    return 0;
}