#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float equation1(int y)
{
    float result1 =0;
    result1 = sqrt(pow(y,2)+45);
    return result1;
}
float equation2(int y)
{
    float result2 = 0;
    result2 = pow(y,2)+y*3+1 ;
    return result2;
}

int main()
{
    float result1;
    float result2;
    int y=0;    
    printf("Enter the number y : ");
    scanf("%d",&y);
    result1 = equation1(y);
    printf("\nx from eq1 = %.2f",result1);
    result2 = equation2(y);
    printf("\nx from eq2 = %.2f",result2);

    return 0;
}