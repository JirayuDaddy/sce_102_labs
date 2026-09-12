#include <stdio.h>
#include <string.h>

void chage_password(char *old_password, char *new_password)
{
    strcpy(old_password,new_password);
}
void newline_remover(char *stpid_new_line)
{
    stpid_new_line[strcspn(stpid_new_line, "\n")] = '\0';
}
int main ()
{
    char username[100];
    char password[100];
    char choice;
    char new_password[100];
    int select_user = 0;
    
    char admin_username[100] = "admin";
    char admin_password[100] = "admin";
    
    char user1_username[100] = "user1";
    char user1_password[100] = "1234";
    
    char user2_username[100] = "user2";
    char user2_password[100] = "5678";

    while (1)
    {
        printf("LOGIN SYSTEM\n\n");
        printf("Username: ");
        fgets(username, sizeof(username), stdin);
        newline_remover(username);

        printf("Password: ");
        fgets(password, sizeof(password), stdin);
        newline_remover(password);

        if(strcmp(username,admin_username) == 0 && strcmp(password,admin_password) == 0)
        {
            printf("\nWelcom my admin!\n");
            printf("Change password for users? (y to change): ");
            scanf(" %c", &choice);
            if(choice == 'y')
            {
                printf("Selet user to change password\n");
                printf("1.admin\n");
                printf("2.user1\n");
                printf("3.user2\n");
                printf("Select (1-3): ");
                do
                {
                    scanf("%d", &select_user);
                    if (select_user <= 0 || select_user > 3)
                        {
                            printf("Invalid selection, try again\n");
                            continue;
                        
                        }
                }while (select_user <= 0 || select_user > 3);   
                    
                getchar();
                
                printf("New Password: ");
                fgets(new_password, sizeof(new_password), stdin);
                newline_remover(new_password);

                    switch (select_user)
                    {
                    case 1:
                        chage_password(admin_password,new_password);
                        break;
                        
                    case 2:
                        chage_password(user1_password,new_password);
                        break;
                    case 3:
                        chage_password(user2_password,new_password);
                        break;
                    default:
                        break;
                    }
                        

                printf("\n----RESET----\n"); 
                continue; 
            }
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
}