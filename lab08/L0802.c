#include <stdio.h>

int main() {
    int age[10];
    for (int i = 0; i < 10; i++) {
        do {
            printf("Enter age for person #%d: ", i + 1);
            scanf("%d", &age[i]);
            if (age[i] < 0) {
                printf("ERROR!\n");
            }
        } while (age[i] < 0); 
    }
    printf("--------\n");
    for (int i = 9; i >= 0; i--) {
        printf("Person #%d age %d\n", i + 1, age[i]);
    }
    return 0;
}