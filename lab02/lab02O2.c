#include <stdio.h>
#include <stdlib.h> 
int main() {
    int first, second;
    float real;
    char ch;
    printf("Enter first integer: ");
    scanf("%d", &first);
    printf("Enter second integer: ");
    scanf("%d", &second);
    printf("Enter float: ");
    scanf("%f", &real);
    printf("Enter character: ");
    scanf(" %c", &ch);
    printf("\n");
    printf("First Integer  : %10d\n", first);
    printf("Second Integer : %10d\n", second);
    printf("Real Number    : %10.2f\n", real);
    printf("Character      : %c\n", ch);
    return 0;
}
