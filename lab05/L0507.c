#include <stdio.h>

int main()
{
    int sum=0,i=1,j=0,k=0,number=0,result=1,result2=1;
    printf("Enter the highest number for factorial : ");
    scanf("%d",&number);
    printf("Factorial results\n");
    for(j=1;j<=number;j++)
    {
    printf("\n%d! = ",j);
    result = result * j;
    
    for(i=1;i<=j;i++)
    {
        printf("%d",i);
        if(i<j)
        {
            printf("*");
        }
    }  
    printf(" = %d",result);
    }
    printf("\nSummation of factorial results\n");
    



    for(j=1;j<=number;j++)
    {
    result2 = result2 * j;
    sum = sum + result2;
    printf("%d ",result2);
    if(j<=result2)
    {
        printf(" + ");
    }
    } 
    printf(" = %d ",sum);
    return 0;
}