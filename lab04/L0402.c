#include <stdio.h>

int main()
{
    int x=0;
    printf("Enter number x : ");
    scanf("%d",&x);
    if (x<0){
        printf("Minus Number");
    }
    else{
        printf("Just Number");
    }
    return 0;
    
}