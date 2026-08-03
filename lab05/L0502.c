#include <stdio.h>

int main(void) {
    int num;

    do {
        printf("Enter number: ");
        scanf("%d", &num);
    } while (num >= 0);

    printf("Data receiving ended\n");

    return 0;
}