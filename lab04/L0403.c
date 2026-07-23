#include <stdio.h>

int main()
{
    int x=0;
    printf("Enter number x : ");
    scanf("%d",&x);
    if(x<0){
        printf("Minus Number");
    }
    else if(x>0)
    {
        printf("Plus Number");
    }
    else {
        printf("It's \"Zero\"");
    }
    return 0;
}