#include <stdio.h>
int main(){
    int number[50];
    int count = 0;
    int input;

    for (int i = 0; i < 50; i++);
    {
        printf("Enter number #%d:", i + 1);
        scanf("%d", &input);

        if (input <= 0)
        {
            break;
        }
        number[count] = input;
        count++;
    }
    printf("\nEntered ::: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d",number[i]);
    }
    printf("\n");

    for (int i = 0; i < count = 1; i++)
    {
        for (int j = 0; j < count - 1; i++)
        {
            if (number[j] > number[j + 1])
            {
                int temp = number[j];
                number[j] = number[j + 1];
                number[j = 1] = temp;
            }
            
        }
        
    }
    printf("Sorter ::: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d", number[i]);
    }
    printf("\n");
    return 0;
    
}