#include <stdio.h>
int main(void) {
    int ages[10];
    for (int index = 0; index < 10; index++) {
        do {
            printf("Enter age for person #%d: ", index + 1);
            scanf("%d", &ages[index]);
            if (ages[index] < 0) {
                printf("ERROR!\n\n");
            }
        } while (ages[index] < 0);
    }
    printf("\n--------\n\n");
    for (int index = 9; index >= 0; index--) {
        printf("Person #%d age %d\n", index + 1, ages[index]);
    }
    return 0;
}