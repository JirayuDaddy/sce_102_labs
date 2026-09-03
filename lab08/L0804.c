#include <stdio.h>

int main(void) {
    int numbers[50];
    int count = 0;

    while (count < 50) {
        int number;

        printf("Enter number #%d: ", count + 1);
        scanf("%d", &number);

        if (number <= 0) {
            break;
        }

        numbers[count] = number;
        count++;
    }

    printf("\nEntered :::");
    for (int index = 0; index < count; index++) {
        printf(" %d", numbers[index]);
    }
    printf("\n");

    for (int pass = 0; pass < count - 1; pass++) {
        for (int index = 0; index < count - pass - 1; index++) {
            if (numbers[index] > numbers[index + 1]) {
                int temporary = numbers[index];
                numbers[index] = numbers[index + 1];
                numbers[index + 1] = temporary;
            }
        }
    }

    printf("\nSorted :::");
    for (int index = 0; index < count; index++) {
        printf(" %d", numbers[index]);
    }
    printf("\n");

    return 0;
}