#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);

    printf("Enter your hight in centimeters: ");
    float hight;
    scanf("%f", &hight);

    printf("Enter your Grade: ");
    char grade;
    scanf(" %c", &grade);

    printf("Your age is: %d\n", age);
    printf("Your hight is: %.2f\n", hight);
    printf("Your Grade is: %c\n", grade);
    return 0;
}