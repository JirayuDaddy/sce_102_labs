#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("List of odd number ::");
    for(n=0;n<=100;++n){
        if(n%2==1){
            printf(" %d",n);
        }
    }
    printf("\n\nList of even number ::");
    for(n=0;n<=100;++n){
        if(n%2==0){
            printf(" %d",n);
        }
    }
    return 0;
}