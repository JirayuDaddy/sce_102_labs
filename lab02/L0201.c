#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    float height;
    char grade;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);
    return 0;
}