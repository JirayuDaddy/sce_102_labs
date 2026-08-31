#include <stdio.h>

#define PERSON_COUNT 10

int main(void)
{
    int ages[PERSON_COUNT];

    for (int i = 0; i < PERSON_COUNT; i++) {
        do {
            printf("Enter age for person #%d: ", i + 1);
            scanf("%d", &ages[i]);

            if (ages[i] < 0) {
                printf("ERROR!\n");
            }
        } while (ages[i] < 0);
    }

    printf("\n--------\n");

    for (int i = PERSON_COUNT - 1; i >= 0; i--) {
        printf("Person #%d age %d\n", i + 1, ages[i]);
    }

    return 0;
}