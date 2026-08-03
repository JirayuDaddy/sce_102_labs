#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter number: ");
        scanf("%d", &num);
    } while (num >= 0);

    printf("\nData receiving ended\n");

    return 0;
}