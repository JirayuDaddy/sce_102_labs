#include <stdio.h>
int main() {
    int abc;
    do {
        printf("Enter number: ");
        scanf("%d",&abc);
    } while (0 <= abc);
    printf("\nData receiving ended\n");

    return 0;
}