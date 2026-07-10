#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age;
    float height;
    char grade;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter height: ");
    scanf("%f", &height);
    printf("Enter Grade: ");
    scanf(" %c", &grade);
    printf("\nAge     : %d", age);
    printf("\nHeight  : %.2f", height);
    printf("\nGrade   : %c", grade);
    return 0;
}