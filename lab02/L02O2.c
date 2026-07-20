#include <stdio.h> 
#include <stdlib.h> 
 
int main() 
{
    int first_integer; 
    int second_integer;
    float F_float ; 
    char C_character ;
    printf("Enter first integer: "); 
    scanf("%d", &first_integer); 
    printf("Enter second integer: "); 
    scanf("%d", &second_integer); 
    printf("Enter float : "); 
    scanf(" %.2f", &F_float); 
    printf("Enter character : "); 
    scanf(" %c", &C_character);
    printf("\nFirst Integer : |%8d|",first_integer);
    printf("\nSecond Integer : |%8d|",first_integer);
    printf("\nFloat Integer : |%8.2f|",first_integer);
    printf("\nChar Integer : |%8d|",first_integer);
    return 0;
}