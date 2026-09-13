#include <stdio.h>
#include <string.h>
int main()
{
   char username[100];
   char password[100];
   char passAdmin[100] = "admin";
   char passUser1[100] = "1234";
   char passUser2[100] = "5678";
   char change;
   char newPassword[100];
   int select;
   printf("LOGIN SYSTEM\n\n");
   printf("Username: ");
   scanf("%s", username);
   printf("Password: ");
   scanf("%s", password);
   if(strcmp(username, "admin") == 0 &&
      strcmp(password, passAdmin) == 0)
   {
       printf("\nWelcome my lovely admin!\n");
       printf("Change password for users? (y to change): ");
       scanf(" %c", &change);
       if(change == 'y')
       {
           printf("Select user to change password\n");
           printf("1.admin\n");
           printf("2.user1\n");
           printf("3.user2\n");
           printf("Select (1-3): ");
           scanf("%d", &select);
           printf("New Password: ");
           scanf("%s", newPassword);
           if(select == 1)
           {
               strcpy(passAdmin, newPassword);
           }
           else if(select == 2)
           {
               strcpy(passUser1, newPassword);
           }
           else if(select == 3)
           {
               strcpy(passUser2, newPassword);
           }
           printf("\n---RESET---\n");
           printf("LOGIN SYSTEM\n\n");
           printf("Username: ");
           scanf("%s", username);
           printf("Password: ");
           scanf("%s", password);
           if(strcmp(username, "admin") == 0 &&
              strcmp(password, passAdmin) == 0)
           {
               printf("\nWelcome my lovely admin!\n");
           }
           else if(strcmp(username, "user1") == 0 &&
                   strcmp(password, passUser1) == 0)
           {
               printf("\nWelcome!\n");
           }
           else if(strcmp(username, "user2") == 0 &&
                   strcmp(password, passUser2) == 0)
           {
               printf("\nWelcome!\n");
           }
           else
           {
               printf("\nError Username or Password\n");
           }
       }
   }
   else if(strcmp(username, "user1") == 0 &&
           strcmp(password, passUser1) == 0)
   {
       printf("\nWelcome!\n");
   }
   else if(strcmp(username, "user2") == 0 &&
           strcmp(password, passUser2) == 0)
   {
       printf("\nWelcome!\n");
   }
   else
   {
       printf("\nError Username or Password\n");
   }
   return 0;
}