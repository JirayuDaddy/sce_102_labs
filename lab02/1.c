#include <stdio.h>
#include <stdlib.h>
int main() {
   
    int birth_year;

    printf("Enter the birth year: ");
    scanf("%d", &birth_year);
    printf("your age is: %d\n", 2026 - birth_year);
    return 0;

}