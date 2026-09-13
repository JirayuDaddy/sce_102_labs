#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];

    printf("LOGIN SYSTEM\n\n");

    printf("Username: ");
    gets(username);
    printf("Password: ");
    gets(password);
    printf("\n");

    if (strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0) {
       
        printf("Welcome my lovely admin!\n");
    } 
    else if ((strcmp(username, "user1") == 0 && strcmp(password, "1234") == 0) || 
             (strcmp(username, "user2") == 0 && strcmp(password, "5678") == 0)) {

        printf("Welcome!\n");
    } 
    else {
        printf("Error Username or Password.\n");
    }

    return 0;
}
