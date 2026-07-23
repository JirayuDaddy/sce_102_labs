#include <stdio.h>

int main()
{
    int x=0;
    printf("Enter number x : ");
    scanf("%d",&x);
    if (x<0){
        printf("Minus Number");
    }
    else if (x>=1000){
        printf("Plus Number\n\"Very Large Number\"");
    }
    else if (x>=100){
        printf("Plus Number\n\"Large Number\"");
    }
    else if (x>0){
        printf("Plus Number\n\"Nominal Range\"");
    }
    else{
        printf("It's \"Zero\"");
    }
    

    return 0;
}