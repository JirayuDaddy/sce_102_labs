#include <stdio.h>

#define MAX_NUMBERS 50

void sortAscending(int numbers[], int count)
{
    for (int i = 0; i < count - 1; i++) {
        int swapped = 0;

        for (int j = 0; j < count - 1 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                swapped = 1;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

void printNumbers(const int numbers[], int count)
{
    for (int i = 0; i < count; i++) {
        printf("%d", numbers[i]);

        if (i < count - 1) {
            printf(" ");
        }
    }

    printf("\n");
}

int main(void)
{
    int numbers[MAX_NUMBERS];
    int count = 0;

    while (count < MAX_NUMBERS) {
        int value;

        printf("Enter number #%d: ", count + 1);
        scanf("%d", &value);

        if (value <= 0) {
            break;
        }

        numbers[count] = value;
        count++;
    }

    printf("\nEntered ::: ");
    printNumbers(numbers, count);

    sortAscending(numbers, count);

    printf("\nSorted ::: ");
    printNumbers(numbers, count);

    return 0;
}