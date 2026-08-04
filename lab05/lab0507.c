#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number,factorial,i,j;
    int sum = 0;
    printf("enter the number for factorial :");
    scanf("%d",&number);
    printf("Factorial results\n");
    for(i=1;i<=number;i++)
    {
        factorial = 1;
        printf("%d! = %d",i,i);
        for(j=i;j>1;j--)
        {
            printf(" * %d",j);
            factorial = factorial * j;
        }
        printf(" = %d\n",factorial);
        sum = sum + factorial;
    }
    printf("\nSumation of factorial results \n");
    sum = 0;
    for(i=1;i<=number;i++)
    {
        factorial = 1;
        for(j=i;j>1;j--)
        {
            factorial = factorial * j;
        }
        printf("%d",factorial);
        if(i != number)
        {
            printf(" + ");
        }
        sum = sum + factorial;
    }
    printf(" = %d\n",sum);
    return 0;
}