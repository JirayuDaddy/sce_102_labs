#include <stdio.h>
#include <string.h>

int main ()
{
    char username[100];
    char password[100];
    
    char admin_username[100] = "admin";
    char admin_password[100] = "admin";
    
    char user1_username[100] = "user1";
    char user1_password[100] = "1234";
    
    char user2_username[100] = "user2";
    char user2_password[100] = "5678";

    printf("LOGIN SYSTEM\n\n");
    printf("Username: ");
    gets(username);
    printf("Password: ");
    gets(password);

    if(strcmp(username,admin_username) == 0 && strcmp(password,admin_password) == 0)
    {
        printf("\nWelcom my admin!");
    }
    else if((strcmp(username,user1_username) == 0 && strcmp(password,user1_password) == 0) || (strcmp(username,user2_username) == 0 && strcmp(password,user2_password) == 0))
    {
        printf("\nWelcome!");
    }
    else
    {
        printf("\nError Username or Password");
    }
    return 0;
}