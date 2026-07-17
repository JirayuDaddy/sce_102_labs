#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    x -= 3 / 2;
    printf("x after eq1 = %d\n", x);

    x *= 6;
    printf("x after eq2 = %d\n", x);

    x += 12 * 3;
    printf("x after eq3 = %d\n", x);

    x *= 14 * (7 * 2 - 4) / 3;
    printf("x after eq4 = %d\n", x);

    return 0;
}