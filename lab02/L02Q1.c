#include <stdio.h>

int main()
{
    int birth_year,age;
    printf("Enter birth year : ");
    scanf("%d",&birth_year);
    age = 2026 - birth_year; 
    printf("User age is %d",age);
    return 0;
}