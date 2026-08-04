#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i;
    printf("List of odd number: ");
    for(i=0; i<=100; i++){
        if(i%2 !=0){
            printf(" %d ", i);
        }
    }
    printf("\n\nList of even number: ");
    for(i=0; i<=100; i++){
        if(i%2 ==0){
            printf(" %d ", i);
        }
    }
    return 0;
}