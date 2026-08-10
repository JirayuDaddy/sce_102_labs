#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float equation1(int y)
{
    float result = 0;
    result = sqrt(pow(y,2)+45);
    return result;
}

float equation2(int y)
{
    float result = 0;
    result = pow(y,2) + 3*y +1;
    return result;
}
int main()
{
    int y=0;
    float eq1,eq2;
    printf("Enter the number for y : ");
    scanf("%d",&y);
    eq1 = equation1(y);
    eq2 = equation2(y);
    printf("\nResults");
    printf("\nx from eq.1 = %.2f",eq1);
    printf("\nx from eq.2 = %.2f",eq2);
    return 0;
}