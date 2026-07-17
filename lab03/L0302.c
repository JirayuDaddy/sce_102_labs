#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1 = 0, n2 = 0, f1 = 0;
    printf("Enter a n1: ");
    scanf("%d", &n1);
    printf("Enter a n2: ");
    scanf("%d", &n2);
    printf("Enter a f1: ");
    scanf("%d", &f1);

    printf("Result:\n");
    printf("%d / %d = %d\n", n1, n2, n1 / n2);
    printf("%d / %d = %d\n", n1, f1, n1 / f1);
    return 0;
}