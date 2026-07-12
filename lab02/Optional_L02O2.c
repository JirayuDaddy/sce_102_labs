#include <stdio.h>
#include <stdlib.h>

int main (){
     
    int first_integer;
    int second_integer;
    float floatt;
    char character;

    printf("Enter first integer: ");
    scanf("%d", &first_integer);

    printf("Enter second integer: ");
    scanf("%d", &second_integer);

    printf("Enter float: ");
    scanf("%f", &floatt);

    printf("Enter character: ");
    scanf(" %c", &character);

    printf("\nFirst Interger : |%8d|", first_integer);
    printf("\nSecond Integer : |%8d|", second_integer);
    printf("\nReal Number    : |%8.2f|", floatt);
    printf("\nCharacter      : %c", character);



    return 0;
}