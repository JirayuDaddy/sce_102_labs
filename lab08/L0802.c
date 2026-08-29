#include <stdio.h>
int main(){
    
    int count = 1;
    int age[10] = {};
    int i;
    
    do
    {
        printf("Enter age for person #%d: ", count);
        scanf("%d", &age[count - 1]);
        ++count;
        if (age[count - 2] <= 0)
        {
            printf("ERROR!\n");
            --count;
        }
        
    } while (count <= 10);
    
    printf("\n--------\n");
    for (i = 10; i >= 1 ; i--)
    {
        printf("Person #%d age %d\n", i , age[i - 1]);
        
    }

    return 0;
}