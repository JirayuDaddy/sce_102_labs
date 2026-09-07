#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>

int main() {
    char username[100];
    char password[100];
    char passwords[3][20] = {"admin", "1234", "5678"};
    char newpass[100];
    char choice;
    int select;
    int is_admin;
    int do_reset;

    do_reset = 0;
    while (1) {
        is_admin = 0;
        if (do_reset) {
            printf("---RESET--LOGIN SYSTEM\n");
            do_reset = 0;
        } else {
            printf("LOGIN SYSTEM\n");
        }
        printf("Username: ");
        gets(username);
        printf("Password: ");
        gets(password);

        if (strcmp(username, "admin") == 0 && strcmp(password, passwords[0]) == 0) {
            printf("Welcome my lovely admin!\n");
            is_admin = 1;
            printf("Change password for users? (y to change): ");
            choice = getchar();
            if (choice != '\n') {
                getchar(); // consume newline after the choice character
            }
            if (choice == 'y' || choice == 'Y') {
                printf("Select user to change password\n");
                printf("1.admin\n");
                printf("2.user1\n");
                printf("3.user2\n");
                printf("Select (1-3): ");
                scanf("%d", &select);
                while (getchar() != '\n');
                printf("New Password: ");
                gets(newpass);
                strcpy(passwords[select - 1], newpass);
                do_reset = 1;
            }
        } else if (strcmp(username, "user1") == 0 && strcmp(password, passwords[1]) == 0) {
            printf("Welcome!\n");
            break;
        } else if (strcmp(username, "user2") == 0 && strcmp(password, passwords[2]) == 0) {
            printf("Welcome!\n");
            break;
        } else {
            printf("Error Username or Password\n");
            break;
        }

        if (is_admin) {
            continue;
        }
    }

    return 0;
}