#include <stdio.h>
#include <stdlib.h>

int main() {

    int arr[12] = {4,5,6,7,8,9,10,11,12,13,14,15} ;
    int *p = arr ;
    
    printf("original ::: ");
    for ( int i = 0; i < 12; i++)
    {
        printf(" %d ",*(p + i));
    }

    printf("\nomultiplied ::: ");
    for ( int i = 0; i < 12; i++)
    {
        printf(" %d ",*(p + i) * 24);
    }

    return 0 ;
    
}