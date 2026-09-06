#include <stdio.h>

int main ()
{
    int arr[12] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int *ptr_arr;
    
    printf("original ::: ");
    for(int i = 0 ; i < 12 ; i++)
    {
    ptr_arr = &arr[i];
    printf("%d ", *ptr_arr);
    }
    printf("\nmultiplied ::: ");
    for(int i = 0 ; i < 12 ; i++)
    {
    ptr_arr = &arr[i];
    printf("%d ", *ptr_arr * 24);
    }
    return 0;
}