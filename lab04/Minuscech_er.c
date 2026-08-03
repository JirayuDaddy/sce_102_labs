#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    if (num < 0) {
        printf("Negative number entered. Exiting.\n");
        return 1;
 
    return 0;
}