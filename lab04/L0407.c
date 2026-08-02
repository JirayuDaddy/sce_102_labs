#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char user_ans;

    printf("Equation :: ans = 15 / 2 + 3 - (14 * n)");
    printf("\nEnter n: ");
    scanf("%d", &n);

    int ans = 15 / 2 + 3 - (14 * n);

    printf("Choices:");
    printf("\na) %d", ans);
    printf("\nb) %d", ans + 10);
    printf("\nc) %d", ans - 10);
    printf("\nd) %d", ans * 10 + 10);

    printf("\n\nEnter your answer: ");
    scanf(" %c", &user_ans);

    if (user_ans == 'a') {
        printf("Correct answer!");
    } else {
        printf("Wrong answer");
    }

    return 0;
}
