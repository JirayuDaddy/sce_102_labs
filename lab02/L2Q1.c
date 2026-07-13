#include <stdio.h>
#include <stdlib.h>

int main()
{
    int birth_year; 
    int age;        
    int current_year = 2026; 

    printf("--- Age Calculator ---\n");
 
    printf("Enter your birth year (AD): ");
    scanf("%d", &birth_year);
    

    age = current_year - birth_year;

    printf("You are %d years old.\n", age);
    
    return 0;
}