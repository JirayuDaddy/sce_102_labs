#include <stdio.h>

int main() {
    int n, ans;
    char user_choice;

    printf("Equation :: ans = 15 / 2 + 3 - (14 * n)\n");
    printf("Enter n: ");
    scanf("%d", &n);

    
    ans = 15 / 2 + 3 - (14 * n);

    printf("Choices:\n");
    printf("a) -400\n");
    printf("b) %d\n", ans); 
    printf("c) -420\n");
    printf("d) -4100\n\n");

    printf("Enter your answer: ");
    scanf(" %c", &user_choice);

    if (user_choice == 'b') {
        printf("Correct answer!\n");
    } else {
        printf("Wrong answer\n");
    }

    return 0;
}
