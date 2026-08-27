#include <stdio.h>

void bubbleSort(int data[], int i)
{
    int n;
    int j;
    int temp;
    for (int n = 0; n < i; n++)
    {
        for( j=0 ; j < (i-1) ; j++ )
        {
            if(data[j] > data[j+1])
            {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }   
    }
}

int main()
{
    int data[50];
    int i,num,attempt=0;
    for(i=0;i<=49;i++)
    {
        printf("Enter number #%d : ",i+1);
        scanf("%d",&num);
        if (num <= 0 )
        {
            break;
        }
        else 
        {
            data[i] = num; 
            attempt = i;
        }
    }
    printf("Entered :: ");
    for(i=0;i<=attempt;i++)
    {
        printf("%d ",data[i]);
    }
    bubbleSort(data,i);
    printf("\nSorted ::: ");
    for(i=0;i<=attempt;i++)
    {
        printf("%d ",data[i]);
    }
    return 0;
}