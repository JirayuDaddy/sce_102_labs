#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
  
    
    printf("Enter birth year:  ");
    scanf("%d", &year);

    int age = 2026 - year;
    printf("%d years \n", age);
    return 0;
}
