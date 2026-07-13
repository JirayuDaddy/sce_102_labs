#include <stdio.h>
#include <stdlib.h> 
int main() {
    int number, i;

    printf("Enter number: ");
    scanf("%d", &number);

    for (i = 1; i <= 6; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}