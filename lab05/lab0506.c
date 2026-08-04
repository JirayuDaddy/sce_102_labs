#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number,factorial;
    int n = 1;
    printf("enter the number for factorial :");
    scanf("%d",&number);
    printf("%d",number);
    for (factorial = number; factorial > 1; factorial--)
    {
        printf (" * %d",factorial-1);
        n = n * factorial;
    }
    printf(" = %d\n",n);
    return 0;
}