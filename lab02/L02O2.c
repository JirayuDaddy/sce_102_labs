#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first, second;
    float floatnum;
    char character;
    printf("Enter first integer: ");
    scanf("%d", &first);
    printf("Enter second integer: ");
    scanf("%d", &second);
    printf("Enter float: ");
    scanf("%f", &floatnum);
    printf("Enter character: ");
    scanf(" %c", &character);
    printf("\nFirst Integer  : |%8d|\n", first);
    printf("Second Integer : |%8d|\n", second);
    printf("Real Number    : |%8.2f|\n", floatnum);
    printf("Character      : %c", character);
    return 0;
}