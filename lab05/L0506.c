#include <stdio.h>

int main()
{
    int i=0,number=0,result=1;
    printf("Enter the number for factorial : ");
    scanf("%d",&number);
    if(number>0)
    {
        for(i=number;i>0;i--)
        {
            result = result*i;
            printf("%d",i);
            if(i>1)
            {
                printf("*");
            }
        }
        printf(" = ");
        printf("%d",result);
    }

}