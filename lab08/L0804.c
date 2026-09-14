#include <stdio.h>

#define MAX_NUMBERS 50

int main(void) {
    int number[MAX_NUMBERS];
    int count = 0;
    int value;
    int i, j, temp;

    for (count = 0; count < MAX_NUMBERS; count++) {
        printf("Enter number #%d: ", count + 1);
        scanf("%d", &value);

        if (value <= 0) {
            break;
        }

        number[count] = value;
    }

    printf("\nEntered ::: ");
    for (i = 0; i < count; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    /* Bubble sort ascending */
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - 1 - i; j++) {
            if (number[j] > number[j + 1]) {
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }

    printf("\nSorted ::: ");
    for (i = 0; i < count; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    return 0;
}