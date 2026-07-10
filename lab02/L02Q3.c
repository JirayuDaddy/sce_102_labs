#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("%d x 1 = %d\n", number, number * 1);
    printf("%d x 2 = %d\n", number, number * 2);
    printf("%d x 3 = %d\n", number, number * 3);
    printf("%d x 4 = %d\n", number, number * 4);
    printf("%d x 5 = %d\n", number, number * 5);
    printf("%d x 6 = %d\n", number, number * 6);
    return 0;
}