#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("%d x 1 = %d", num, num);
    printf("\n%d x 2 = %d", num, num*2);
    printf("\n%d x 3 = %d", num, num*3);
    printf("\n%d x 4 = %d", num, num*4);
    printf("\n%d x 5 = %d", num, num*5);
    printf("\n%d x 6 = %d", num, num*6);
    return 0;
}