#include <stdio.h>
#include <string.h>

int main()
{
    char usernames[3][50] = {"admin", "user1", "user2"};
    char passwords[3][50] = {"admin", "1234", "5678"};
    char username[50];
    char password[50];
    char choice;
    int select;
    int userIndex;
    int i;

    while (1)
    {
        printf("LOGIN SYSTEM\n\n");

        printf("Username: ");
        scanf("%s", username);

        printf("Password: ");
        scanf("%s", password);

        printf("\n");

        userIndex = -1;
        for (i = 0; i < 3; i++)
        {
            if (strcmp(username, usernames[i]) == 0 && strcmp(password, passwords[i]) == 0)
            {
                userIndex = i;
                break;
            }
        }

        if (userIndex == -1)
        {
            printf("Error Username or Password\n");
            break;
        }

        if (userIndex == 0)
        {
            printf("Welcome my lovely admin!\n");

            printf("Change password for users? (y to change): ");
            scanf(" %c", &choice);

            if (choice == 'y')
            {
                printf("Select user to change password\n");
                printf("1.admin\n");
                printf("2.user1\n");
                printf("3.user2\n");
                do
                {
                    printf("Select (1-3): ");
                    scanf("%d", &select);
                } while (select < 1 || select > 3);

                printf("New Password: ");
                scanf("%s", passwords[select - 1]);

                printf("\n---RESET---\n");
                continue;
            }
        }
        else
        {
            printf("Welcome!\n");
        }

        break;
    }

    return 0;
}
