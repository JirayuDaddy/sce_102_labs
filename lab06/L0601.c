#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float equation1(int y)
{
    float ans1;
    float ans2;
    printf("Enter the number for y: ");
    scanf("%d", &y);
    printf("\nResults\n");

    ans1 = sqrt(pow(y , 2) + 45);
    printf("x from eq.1 = %.2f\n", ans1);

    ans2 = pow(y, 2) + (3 * y) + 1;
    printf("x from eq.2 = %.2f\n", ans2);

    return 0;
}

int main()
{
    int y =0;
    equation1(y);
    return 0;
}