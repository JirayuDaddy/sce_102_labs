#include <stdio.h>

int main()
{
    int i=0;
    printf("List of odd number : ");
    for(i=1;i<=100;i+=2){
        printf("%d ",i);
    }
    printf("\nList of odd number : ");
    for(i=0;i<=100;i+=2){
        printf("%d ",i);
    }
    return 0;
}