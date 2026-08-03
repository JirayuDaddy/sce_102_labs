#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    do{
        printf("Enter number: ");
        scanf("%d",&i);
    }while(i>=0);
    printf("Data receiving ended");
    return 0;
}