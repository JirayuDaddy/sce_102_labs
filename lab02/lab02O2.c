#include <stdio.h>
#include <stdlib.h>
int main()
{
    int integer1;
    int integer2;
    float float1;
    char character1;
    printf("Enter first integer: ");
    scanf("%d", &integer1);
    printf("Enter second integer: ");
    scanf("%d", &integer2);
    printf("Enter a float: ");
    scanf("%f", &float1);
    printf("Enter a character: ");
    scanf(" %c", &character1);
    printf("First integer:| %5d|\n", integer1);
    printf("Second integer:| %5d|\n", integer2);
    printf("Float:| %8.2f|\n", float1);
    printf("Character:| %c|\n", character1);
    return 0;
}