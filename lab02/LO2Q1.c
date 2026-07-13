#include <stdio.h>
#include <stdlib.h>
int main() {
    int birthYear, age;

    printf("Enter birth year: ");
    scanf("%d", &birthYear);

    age = 2024 - birthYear;

    printf("\nUser age is %d\n", age);

    return 0;
}