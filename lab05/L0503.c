#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("List of odd number :: ");
    for(i = 1; i <= 100; i += 2)
    {
        printf("%d", i);
    }

    printf("\n\nList of even number :: ");
    for(i = 2; i <= 100; i += 2)
    {
        printf("%d", i);
    }
    printf("\n");
    
    
    return 0;
}
