#include <stdio.h>
#include <stdlib.h>

int main()
{
    int birth;
    printf("Enter birth year: ");
    scanf("%d", &birth);
    printf("User age is %d\n", 2026-birth);
    return 0;
}