#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Negative number.\n");
    }
    else if (num == 0)
    {
        printf("Zero.\n");
    }
    else
    {
        printf("Positive number.\n");
        if (num > 1000)
        {

            printf("Very Large Number.\n");
        }
        else if (num == 67){
            printf(" SIX SEVEN.\n");
            system("start https://youtu.be/Md7kqHsWWs4?si=aMjNQgh5KDRFXf5q");
        }
        else if (num >= 100)
        {
            printf("Large Number.\n");
        }
        else
        {
            printf("Nominal Range.\n");
        }
    }

    return 0;
}