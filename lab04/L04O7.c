#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, ans;
    char choice;

    printf("Equation :: ans = 15 / 2 + 3 - (14 * n)\n");
    printf("Enter n: ");
    scanf("%d", &n);

    ans = 15 / 2 + 3 - (14 * n);

    printf("Choices:\n");
    printf("a) %d\n", ans + 10);
    printf("b) %d\n", ans);       
    printf("c) %d\n", ans - 10);
    printf("d) %d\n", ans * 10);

    printf("\nEnter your answer: ");
    scanf(" %c", &choice);

    if (choice == 'b' || choice == 'B') {
        printf("Correct answer!\n");
    } 
    else {
        printf("Wrong answer\n");
    }

    return 0;
}