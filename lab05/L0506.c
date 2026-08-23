#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num, factorial;
    int sum = 1;
    
    printf("Enter the number for factorial: ");
    scanf("%d", &num);
    printf("%d", num);
    for(factorial = num; factorial > 1; factorial--)
    {
        printf(" * %d", factorial - 1);
        sum = sum * factorial;
    }
    printf(" = %d\n", sum);
    return 0;
}