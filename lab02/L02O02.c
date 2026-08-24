#include <stdio.h>
#include <stdlib.h>
int main()
{
    int int1,int2;
    float float1;
    char char1;
    printf("Enter first integer: ");
    scanf("%d",&int1);
    printf("Enter second integer: ");
    scanf("%d",&int2);
    printf("Enter float: ");
    scanf("%f",&float1);
    printf("Enter character: ");
    scanf(" %c",&char1);
    printf("First Integer  : |%8d|\n",int1);
    printf("Seconf Integer : |%8d|\n",int2);
    printf("Real Number    : |%8.2f|\n",float1);
    printf("Character      : %c",char1);
    return 0;
}