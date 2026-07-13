#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int year ;
    int age ; 
    
    printf("Enter birth year:");
    scanf("%d", &number);
    printf("Enter year:");
    scanf("%d", &year);
    age = year-number ;
    printf ("User age is %d\n",number);

    return 0;
}