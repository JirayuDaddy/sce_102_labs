#include<stdio.h>
#include<stdlib.h>

int main()
{
    int first_integer,second_integer;
    float real_number;
    char character;
    
    printf("Enter first integer: ");
    scanf("%d",&first_integer);
    printf("Enter second integer: ");
    scanf("%d",&second_integer);
    printf("Enter float: ");
    scanf("%f",&real_number);
    printf("Enter character: ");
    scanf(" %c",&character);
    printf("\nFirst Integer  : | %d  |\n",first_integer);
    printf("Second Integer : |%d.  |\n",second_integer);
    printf("Real Number    : |%.2f|\n",real_number);
    printf("Character      : %c\n",character);
return 0;
}