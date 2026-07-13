#include <stdio.h>
#include <stdlib.h>


int main()
{
    int birth_year;
    printf("Enter your birth year: ");
    scanf("%d", &birth_year);
    int age = 2026 - birth_year;
    printf("Your age is: %d\n", age);
    return 0;
}