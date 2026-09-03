#include <stdio.h>





int main()
{
    int result;
    int arr[12] = {4,5,6,7,8,9,10,11,12,13,14,15};
    int *ptr_arr;
    ptr_arr = &arr;
    printf("original :: ");
    for(int i=0;i<=11;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<=11;i++)
    {
        result = *(ptr_arr+i) * 24;
        arr[i] = result;
    }
    printf("\nmultipled :: ");
    for(int i=0;i<=11;i++)
    {
        printf("%d ",arr[i]);
    }
}