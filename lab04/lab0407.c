#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n = 30;
    char answer;
    printf("Equation :: ans = 15 / 2 + 3 - (14 * n)");
    printf("\nEnter n: 30");
    printf("\nChoices:\na) -400\nb) -410\nc) -420\nd) -4100");
    printf("\nEnter your answer: ");
    scanf("%c", &answer);
    if(answer == 'b'){
        printf("\nCorrect answer!");
    }
    else{
        printf("Wrong answer");
    }
return 0;
}