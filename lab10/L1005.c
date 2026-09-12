#include <stdio.h>
#include <string.h>

int main()
{
    char user[3][100] = {"admin", "user1", "user2"};
    char pass[3][100] = {"admin", "1234", "5678"};

    char inputuser[100];
    char inputpass[100];

    printf("LOGIN SYSTEM\n\n");

    printf("Username: ");
    gets(inputuser);

    printf("Password: ");
    gets(inputpass);

    if (strcmp(inputuser, user[0]) == 0 && strcmp(inputpass, pass[0]) == 0)
    {
        printf("\nWelcome my lovely admin!\n");
    }
    else if ((strcmp(inputuser, user[1]) == 0 && strcmp(inputpass, pass[1]) == 0) || (strcmp(inputuser, user[2]) == 0 && strcmp(inputpass, pass[2]) == 0))
    {
        printf("\nWelcome!\n");
    }
    else
    {
        printf("\nError Username or Password");
    }
    return 0;
}