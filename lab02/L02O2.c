<<<<<<< HEAD
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

=======
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
>>>>>>> abc088779f0757731e00d7ad81b0a8e0762a622e
