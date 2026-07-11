#include <stdio.h>

int main()
{
    int first_int,second_int;
    float fnum;
    char letter;


    printf("Enter first integer : ");
    scanf("%d",&first_int);
    printf("Enter second integer : ");
    scanf("%d",&second_int);
    printf("Enter float : ");
    scanf("%f",&fnum);
    printf("Enter character : ");
    scanf(" %c",&letter);

    printf("First Integer : |%8d|\n",first_int);
    printf("Second Integer : |%8d|\n",second_int);
    printf("Real Number : |%8.2f|\n",fnum);
    printf("Character : %c",letter);
    
    return 0;
}