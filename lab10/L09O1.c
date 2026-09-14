#include <stdio.h>
#include <string.h>

int main() {
    char user[3][10] = {"admin", "user1", "user2"};
    char pass[3][10] = {"admin", "1234", "5678"};

    char u[10], p[10];
    char ch;
    int choice;
    char new_pass[10];
    int i, found = 0;

    while (1) {
        printf("LOGIN SYSTEM\n\n");
        printf("Username: ");
        scanf("%9s", u);
        printf("Password: ");
        scanf("%9s", p);
        printf("\n");

        found = 0;
        if (strcmp(u, user[0]) == 0 && strcmp(p, pass[0]) == 0) {
            printf("Welcome my lovely admin!\n");
            printf("Change password for users? (y to change): ");
            
            // Clear input buffer safely instead of fflush(stdin)
            while (getchar() != '\n');
            scanf("%c", &ch);

            if (ch == 'y' || ch == 'Y') {
                printf("Select user to change password\n");
                printf("1. admin\n");
                printf("2. user1\n");
                printf("3. user2\n");
                printf("Select (1-3): ");
                scanf("%d", &choice);
                printf("New Password: ");
                scanf("%9s", new_pass);

                if (choice >= 1 && choice <= 3) {
                    strcpy(pass[choice - 1], new_pass);
                }

                printf("\n---RESET---\n");
                continue;
            } else {
                break;
            }
        } else {
            for (i = 1; i < 3; i++) {
                if (strcmp(u, user[i]) == 0 && strcmp(p, pass[i]) == 0) {
                    found = 1;
                    break;
                }
            }
            if (found) {
                printf("Welcome!\n");
            } else {
                printf("Login failed!\n");
            }
            break;
        }
    }

    return 0;
}