#include <stdio.h>

int main()
{
    char choice;
    printf("Equation :: ans = 15 /2 + 3 - (14*n)\n");
    printf("Enter n : 30\n");
    printf("Choices : \n");
    printf("a) -400\n");
    printf("b) -410\n");
    printf("c) -420\n");
    printf("d) -4100\n");

    printf("Enter your answer : ");
    scanf(" %c",&choice);

    if (choice == 'b'){
        printf("Correct answer!");
    }
    else {
        printf("Wrong answer");
    }
    return 0;
}