#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number = 0, x, y, z;
    printf("Enter a number: ");
    scanf("%d", &number);

    x = 3 + 4 * number / 2 - 18;
    y = (3 + 4) * number / (2 - 18);
    z = 15 / 2 + 3 - (14 * number);

    printf("Result X: %d\n", x);
    printf("Result Y: %d\n", y);
    printf("Result Z: %d\n", z);

    return 0;
}