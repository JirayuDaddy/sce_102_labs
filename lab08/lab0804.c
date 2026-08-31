#include <stdio.h>
#include <stdlib.h>

int inputNumber(int number[]);
void bubbleSort(int number[], int count);
void showNumber(int number[], int count);

int main()
{
    int number[50];
    int count;
    count = inputNumber(number);
    printf("\nEntered :: ");
    showNumber(number, count);
    bubbleSort(number, count);
    printf("\nSorted :: ");
    showNumber(number, count);

    return 0;
}

int inputNumber(int number[])
{
    int i = 0;

    while (i < 50)
    {
        printf("Enter number #%d: ", i + 1);
        scanf("%d", &number[i]);
        if (number[i] == 0)
        {
            break;
        }

        i++;
    }

    return i;
}

void bubbleSort(int number[], int count)
{
    int i, j, temp;

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - 1 - i; j++)
        {
            if (number[j] > number[j + 1])
            {
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }
}

void showNumber(int number[], int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        printf("%d ", number[i]);
    }

    printf("\n");
}