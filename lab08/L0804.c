#include <stdio.h>

int main()
{
    int i = 0;
    int number[50];
    int count = 0;
    

    for(i = 0 ; i < 50 ; i++)
    {
        printf("Enter number #%d: ", i+1 );
        scanf("%d", &number[i]);

        if(number[i] <= 0)
        {
            break;
        }
    
        count++;

    }

    printf("\nEntered ::: "); 
    for(i = 0 ; i < count ; i++)
    {
        printf("%d ", number[i] );
    }

    printf("\nSorted ::: ");
    for(int i = 0 ; i < count ; i++)
    {
     for(int j = 0 ; j < count - 1 ; j++)
     {
        if (number[j] > number[j + 1])
        {
            int temp = number[j];
            number[j] = number[j + 1];
            number[j + 1] = temp;
        }
     }
    }

    for(i = 0 ; i < count ; i++)
    {
    printf("%d ", number[i]);
    }
    return 0;
}