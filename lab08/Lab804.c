#include <stdio.h>

int main() {
    int num[50];
    int count = 0;
    int temp;

    for (int i = 0; i < 50; i++) {
        printf("Enter number #%d: ", i + 1);
        scanf("%d", &num[i]);

        if (num[i] <= 0) {
            break;
        }

        count++;
    }

    printf("\nEntered ::: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", num[i]);
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("\n\nSorted ::: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", num[i]);
    }

    printf("\n");

    return 0;
}