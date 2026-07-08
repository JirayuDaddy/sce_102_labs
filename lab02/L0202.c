#include <stdio.h>
#include <stdlib.h>

int main() {
    int First_int, Second_int;
    float F_float;
    char C_char;

    printf("Enter First integer: ");
    scanf("%d", &First_int);
    printf("Enter Second integer: ");
    scanf("%d", &Second_int);
    printf("Enter a float: ");
    scanf("%f", &F_float);
    printf("Enter a character: ");
    scanf(" %c", &C_char);
    printf("First integer: %d\n", First_int);
    printf("Second integer: %d\n", Second_int);
    printf("Float: %.2f\n", F_float);
    printf("Character: %c\n", C_char);
    return 0;
}