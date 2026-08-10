#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float equation1(int number)
{
    float x1, x2;

    printf("Enter the number for y: ");
    scanf("%d", &number);
    printf("\nResults\n");
    x1 = sqrt(pow(number, 2) + 45);
    printf( "x from eq.1 = %.2f\n",x1);
    x2 = pow(number, 2) + 3 * number + 1;
    printf("x from eq.2 = %.2f",x2);

    return 0;

}
int main(void)
{
    int number = 0;
    equation1(number);
    return 0;

}