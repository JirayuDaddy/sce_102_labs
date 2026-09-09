#include <stdio.h>
#include <string.h>

int main()
{
    char username[100];
    char password[100];
    printf("username : ");
    gets(username);
    printf("password : ");
    gets(password); 
    if (strcmp(username,"admin") == 0 )
    {
        if (strcmp(password,"admin") == 0)
        {
            printf("welcome my lovely admin");
        }
        else
        {
            printf("Error username or password");
        }
    }
    else if (strcmp(username,"user1") == 0)
    {
        if(strcmp(password,"1234") == 0)
        {
            printf("Welcome ! ");
        }
        else
        {
            printf("error username or password");

        }
    }
    else if (strcmp(username,"user2") == 0)
    {
        if(strcmp(password,"5678") == 0)
        {
            printf("Welcome !");
        }
        else
        {
            printf("error username or password");

        }
    }
    else{
        printf("error username or password");
    }
    return 0;
}