#include <stdio.h>
#include <stdlib.h> 

int main() {
    int num, i;
    int fact = 1;

    printf("Enter the number for factorial: ");
    scanf("%d", &num);

    for (i = num; i >= 1; i--) {
        fact = fact * i;

        if (i > 1) {
            printf("%d * ", i);
        } 
        else {
            printf("%d = ", i);
        }
    }
    printf("%d\n", fact);

    return 0;
}