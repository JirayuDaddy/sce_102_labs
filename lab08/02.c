#include <stdio.h>
int main(){
    int ages[10];
    for (int i = 0; i < 10; i++)
    {
        do
        {
            printf("Enter age for person #%d:", i + 1);
            scanf("%d",&ages[i]);
            if (ages[i] < 0)
            {
                printf("ERROR!\n");
            }
            
        } while (ages[i] < 0);
        
    }
        printf("-------------\n");
        for (int i = 9; i >= 0 ; i--)
        {
            printf("Person #%d age %d\n", i + 1,ages[i]);
        }
        return 0;
        
}