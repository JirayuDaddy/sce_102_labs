#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    do {
        printf("Enter number : ");
        scanf("%d", &num);
    } while (num >= 0);
    printf("Data receiving ended\n");
    return 0;
}