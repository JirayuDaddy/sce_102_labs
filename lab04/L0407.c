#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,ans;
    char choice;
    ans = 15 / 2 + 3 - (14*n);
    printf("Equation :: ans = 15 / 2 + 3 - (14*n)\n");
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Choice:\n");
    printf("a) -400\n");
    printf("b) -410\n");
    printf("c) -420\n");
    printf("d) -4100\n");

    printf("Enter your answer: ");
    scanf(" %c", &choice);

    if(choice == 'b')
    {
        printf("Correct answer!");
    }
    else
    {
        printf("Wrong answer");
    }
    return 0;

}