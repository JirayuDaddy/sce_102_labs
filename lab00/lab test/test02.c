#include <stdio.h>

int main() {
    int first_int, second_int;
    float flt;
    char chr;

   
    printf("Enter first integer: ");
    scanf("%d", &first_int);
    
    printf("Enter second integer: ");
    scanf("%d", &second_int);
    
    printf("Enter float: ");
    scanf("%f", &flt);
    
    printf("Enter character: ");
    scanf(" %c", &chr); 

   
    printf("\n");
    printf("First Integer : |%8d|\n", first_int);
    printf("Second Integer : |%8d|\n", second_int);
    printf("Real Number    : |%8.2f|\n", flt);
    printf("Character      : %c\n", chr);

    return 0;
}
