#include <string.h>
#include <stdio.h>

char password1[100] = "admin";
char password2[100] = "1234";
char password3[100] = "5678";


void welcomeui()
{
    char username[100];
    char password[100];
    printf("\nusername : ");
    gets(username);
    printf("\npassword : ");
    gets(password); 
    if (strcmp(username,"admin") == 0 )
    {
        if (strcmp(password,password1) == 0)
        {
            printf("\nwelcome my lovely admin");
        }
        else
        {
            printf("Error username or password");
        }
    }
    else if (strcmp(username,"user1") == 0)
    {
        if(strcmp(password,password2) == 0)
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
        if(strcmp(password,password3) == 0)
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
}

int main()
{   
    char dummy[100];
    char newpassword[100];
    int select_user;
    char choice[100];
    welcomeui();
    do
    {   
        printf("\nChange password for users? (y to change) : ");
        scanf("%s",&choice);
        if (strcmp(choice,"y") != 0)
        {
            printf("Error input");
        }
    } while (strcmp(choice,"y") != 0);
    printf("\nSelect user to change password");  
    printf("\n1.admin");
    printf("\n2.user1");
    printf("\n3.user2");
    printf("\nSelect (1-3) : ");
    scanf("%d",&select_user);
    gets(dummy);
    printf("\nNew password : ");
    switch(select_user) 
    {
        case (1) :
        gets(newpassword);
        strcpy(password1 , newpassword);
        break;
        case (2) :
        gets(newpassword);
        strcpy(password2 , newpassword);
        break;
        case (3) :
        gets(newpassword);
        strcpy(password3 , newpassword);
        break;
        default :
        printf("kuay");
    }
    printf("------reset------\n");
    welcomeui();
    return 0;
}