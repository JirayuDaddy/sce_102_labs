#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter First interger:");
    int first_integer;
    scanf("%d", &first_integer);

    printf("Enter Second interger:");
    int second_integer;
    scanf("%d", &second_integer);

    printf("Enter float number:");
    float float_number;
    scanf("%f", &float_number);

    printf("Enter character:");
    char character;
    scanf(" %c", &character);

    printf("First integer: %d\n", first_integer);
    printf("Second integer: %d\n", second_integer);
    printf("Float number: %.2f\n", float_number);
    printf("Character: %c\n", character);
    
    return 0;

}