#include <stdio.h>
#include <string.h>

int main(void) {
    char username[20];
    char password[20];
    printf("LOGIN SYSTEM\n");
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);
    if (strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0) {
        printf("Welcome my lovely admin!\n");
    } else if (strcmp(username, "user1") == 0 && strcmp(password, "1234") == 0) {
        printf("Welcome!\n");
    } else if (strcmp(username, "user2") == 0 && strcmp(password, "5678") == 0) {
        printf("Welcome!\n");
    } else {
        printf("Error Username or Password\n");}
    return 0;
}