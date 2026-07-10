#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter birth year: ");
    scanf("%d", &age);
    printf("User age is: %d\n", 2026-age);
    return 0;
}