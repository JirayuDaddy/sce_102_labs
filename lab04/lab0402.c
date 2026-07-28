#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() 
{
    int nmber;
    printf("Enter a number: ");
    scanf("%d", &nmber);
    if (nmber < 0) 
    {
        printf("minus number\n");
    } 
    else{
        printf("just number\n");
    }
    
    return 0;
}