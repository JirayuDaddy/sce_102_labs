#include <stdio.h>

int main(void) {
    int n, ans;
    char answer, correct;
    const int a = -400, b = -410, c = -420, d = -4100;

    printf("Equation :: ans = 15 / 2 + 3 - (14 * n)\n");
    printf("Enter n: ");
    scanf("%d", &n);

    ans = 15 / 2 + 3 - (14 * n);

    if (ans == a) {
        correct = 'a';
    } else if (ans == b) {
        correct = 'b';
    } else if (ans == c) {
        correct = 'c';
    } else if (ans == d) {
        correct = 'd';
    } else {
        correct = '?';
    }

    printf("Choices:\n");
    printf("a) %d\n", a);
    printf("b) %d\n", b);
    printf("c) %d\n", c);
    printf("d) %d\n", d);
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == correct) {
        printf("Correct answer!\n");
    } else {
        printf("Wrong answer\n");
    }

    return 0;
}
