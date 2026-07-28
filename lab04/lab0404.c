#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("minus number\n");
    }
    else if (number > 0)
    {
        printf("Plus number\n");
        if (number >= 1000)
        {
            printf ("Very large number\n");
        }
        else if (number >= 100)
        {
            printf ("Large number\n");
        }
        else
        {
            printf("\"Nominal\"\n");
        }
        
    }
    else
    {
        printf("It's \"Zero\"\n");
    }
    return 0;
}