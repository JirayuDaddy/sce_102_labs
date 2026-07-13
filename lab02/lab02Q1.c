#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    int year_now;
    year_now = 2026;
    printf("Enter birth year: ");
    scanf("%d",&year);
    printf("\n User age is %d",year_now-year);
    return 0;
}