#include <stdio.h>
#include <stdlib.h>
#include <math.h>
<<<<<<< HEAD

int main()
{
    float y, x;
    printf("Enter the number for y: ");
    scanf("%f", &y);
    printf("\nResults\n");
    x=sqrt(pow(y,2)+45);
    printf("x from eq.1 = %.2f\n", x);
    x=(pow(y,2))+(3*y)+1;
    printf("x from eq.2 = %.2f\n", x);
    return 0;
}
=======
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
>>>>>>> cddc665404318f88b3799f8f798d6d4972ed92f6
