#include <stdio.h>

int main()
{
    int number=0;
    do 
    {
        printf("Enter number : ");
        scanf("%d",&number);
    }while (number>=0);
    printf("Data receiving ended");
    return 0;
}