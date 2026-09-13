#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char username[100];
    char password[100];

    char user1[100] = "admin";
    char pass1[100] = "admin";

    char user2[100] = "user1";
    char pass2[100] = "1234";

    char user3[100] = "user2";
    char pass3[100] = "5678";


    printf("LOGIN SYSTEM\n\n");

    printf("Username: ");
    gets(username);

    printf("Password: ");
    gets(password);
    
       if (strcmp(username, user1) == 0 && strcmp(password, pass1) == 0) {
        printf("\nWelcome my lovely admin!\n");
    }
    else if (strcmp(username, user2) == 0 && strcmp(password, pass2) == 0) {
        printf("\nWelcome!\n");
    }
    else if (strcmp(username, user3) == 0 && strcmp(password, pass3) == 0) {
        printf("\nWelcome!\n");
    }
    else {
        printf("\nError Username or Password\n");
    }

    return 0;
}