#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("x after ep1 = %d\n", x = x-3/2);
    printf("x after ep2 = %d\n", x = 3*x+4*x-x);
    printf("x after ep3 = %d\n", x = 12*3+x);
    printf("x after ep4 = %d\n", x = 14*(7*2-4)/3*x);
    return 0;
}