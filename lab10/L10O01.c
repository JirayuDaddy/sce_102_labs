#include <stdio.h>
#include <string.h>
int main(void) {
    char adminPass[20] = "admin";
    char user1Pass[20] = "1234";
    char user2Pass[20] = "5678";
    int reset = 1;
    while (reset) {
        char username[20];
        char password[20];
        char choice;
        int select;
        char newPassword[20];
        printf("LOGIN SYSTEM\n\n");
        printf("Username: ");
        scanf("%s", username);
        fflush(stdin);
        printf("Password: ");
        scanf("%s", password);
        fflush(stdin);
        if (strcmp(username, "admin") == 0 && strcmp(password, adminPass) == 0) {
            printf("\nWelcome my lovely admin!\n");
            printf("Change password for users? (y to change): ");
            scanf("%c", &choice);
            fflush(stdin);
            if (choice == 'y' || choice == 'Y') {
                printf("\nSelect user to change password\n\n");
                printf("1.admin\n");
                printf("2.user1\n");
                printf("3.user2\n");
                printf("Select (1-3): ");
                scanf("%d", &select);
                fflush(stdin);
                printf("New Password: ");
                scanf("%s", newPassword);
                fflush(stdin);
                if (select == 1) {
                    strcpy(adminPass, newPassword);
                } else if (select == 2) {
                    strcpy(user1Pass, newPassword);
                } else if (select == 3) {
                    strcpy(user2Pass, newPassword);
                }
                printf("\n---RESET---\n\n");
                reset = 1;
            } else {
                return 0;}
        } else if (strcmp(username, "user1") == 0 && strcmp(password, user1Pass) == 0) {
            printf("\nWelcome!\n");
            return 0;
        } else if (strcmp(username, "user2") == 0 && strcmp(password, user2Pass) == 0) {
            printf("\nWelcome!\n");
            return 0;
        } else {
            printf("\nError Username or Password\n");
            return 0;}}
    return 0;
}