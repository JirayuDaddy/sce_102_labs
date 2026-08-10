#include <stdio.h>
#include <math.h>

float equation1(float y)
{
    return sqrt(pow(y, 2) + 45);
}
float equation2(float y)
{
    return pow(y, 2) + 3 * y + 1;
}
int main()
{
    float y;
    float x1, x2;
    printf("Enter the number for y: ");
    scanf("%f", &y);
    x1 = equation1(y);
    x2 = equation2(y);
    printf("\nResults\n");
    printf("x from eq.1 = %.2f\n", x1);
    printf("x from eq.2 = %.2f\n", x2);
    return 0;
}