#include <stdio.h>
#include <stdlib.h>

int main()
{
    int First_int, Second_int;
    float F_float;
    char C_char;

    printf("Enter First interger: ");
    scanf("%d", &First_int);
    printf("Enter Second integer: ");
    scanf("%d", &Second_int);
    printf("Enter a float: ");
    scanf("%f", &F_float);
    printf("Enter a character: ");
    scanf(" %c", &C_char);
    printf("Frist integer : |%8d|\n", First_int);
    printf("Second integer : |%8d|\n", Second_int);
    printf("a float : |%8.2f|\n", F_float);
    printf("a character : %c\n", C_char);
    Return 0;

}

