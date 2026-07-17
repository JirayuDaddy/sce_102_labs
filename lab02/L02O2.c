#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_integer ;
    int second_integer ;
    float Real_number ;
    char character ; 
    
    printf("Enter first integer : ");
    scanf("%d", &first_integer);
    printf("Enter second integer : ");
    scanf("%d", &second_integer);
    printf("Enter float  : ");
    scanf("%f", &Real_number);
    printf("Enter character : ");
    scanf(" %c", &character);


    printf("First integer  : |%6d|\n", first_integer);
    printf("Second integer : |%6d|\n", second_integer);
    printf("Real number    : |%615.2f|\n", Real_number);
    printf("Character : %c\n", character);

    return 0;
}