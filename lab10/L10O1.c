#include <stdio.h>
#include <string.h>

int main() {
    char pass_admin[50] = "admin";
    char pass_user1[50] = "1234";
    char pass_user2[50] = "5678";

    char username[50];
    char password[50];
    char confirm_change;
    char target_user[50];
    char new_password[50];

    int is_reset = 0; 

    while (1) {
        if (is_reset) {
            printf("---RESET---\n\n");
            is_reset = 0;
        }

        printf("LOGIN SYSTEM\n\n");

        printf("Username: ");
        scanf("%s", username);

        printf("Password: ");
        scanf("%s", password);

        printf("\n");

        if (strcmp(username, "admin") == 0 && strcmp(password, pass_admin) == 0) {
            printf("Welcome my lovely admin!\n");
            
            printf("Change password for users? (y to change): ");
            fflush(stdin); 
            scanf(" %c", &confirm_change);

            if (confirm_change == 'y' || confirm_change == 'Y') {
                printf("Enter username to change password: ");
                scanf("%s", target_user);

                printf("Enter new password: ");
                scanf("%s", new_password);

                if (strcmp(target_user, "admin") == 0) {
                    strcpy(pass_admin, new_password);
                } else if (strcmp(target_user, "user1") == 0) {
                    strcpy(pass_user1, new_password);
                } else if (strcmp(target_user, "user2") == 0) {
                    strcpy(pass_user2, new_password);
                }

                printf("\n");
                is_reset = 1; 
                continue;     
            } else {
                break; 
            }
        } 
        
        else if (strcmp(username, "user1") == 0 && strcmp(password, pass_user1) == 0) {
            printf("Welcome!\n");
            break; 
        } 
        else if (strcmp(username, "user2") == 0 && strcmp(password, pass_user2) == 0) {
            printf("Welcome!\n");
            break; 
        } 
        
        else {
            printf("Error Username or Password.\n");
            break; 
        }
    }

    return 0;
}