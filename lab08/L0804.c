#include <stdio.h>
#include <stdlib.h>

int main(){
    int number[50];
    int count = 0;
    int input;
    int i, j, temp;

    for(i=0; i<50; i++)
    {
        printf("Enter number #%d: ",i+1);
        scanf("%d", &input);
        if(input <= 0){
            break;
        }
        number[count] = input;
        count++;
    }
    printf("\nEntered ::: ");
    for(i=0; i<count; i++)
    {
        printf("%d",number[i]);
    }
    printf("\n");
    for(i=0; i<count-1; i++)
    {
        for(j=0; j<count-1-i; j++)
        {
            if(number[j] > number[j+1])
            {
                temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            
            }
        }
    }
    printf("\nSorted ::: ");
    for(i=0; i<count; i++)
    {
        printf("%d",number[i]);
    }
    printf("\n");
    return 0;
}