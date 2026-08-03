#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    do {
        printf("Enter a number: ");
        scanf("%d", &number);
    } while (number >= 0);

    printf("Data receiving ended: %d\n", number);
    return 0;
}