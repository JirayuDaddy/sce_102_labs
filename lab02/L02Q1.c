#include <stdio.h>
#include <stdlib.h>

int main()
{
    int birthYear, currentYear = 2026, age;

    printf("Enter birth year: ");
    scanf("%d", &birthYear);

    age = currentYear - birthYear;

    printf("User age is %d\n", age);

    return 0;
}