#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int number=0;
    do{
        printf("Enter number: ");
        scanf("%d", &number);
    } while(number>0);
    printf("\nData receiving ended\n");
    return 0;
}