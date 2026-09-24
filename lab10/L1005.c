<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    char s2[100];

    printf("LOGIN SYSTEM\n");
    printf("Username: ");
    gets(s1);
    printf("Password: ");
    gets(s2);
    if (strcmp(s1, "admin") == 0 && strcmp(s2, "admin") == 0) {
        printf("Welcome my lovely admin!\n");
    }
    else if (strcmp(s1, "user1") == 0 && strcmp(s2, "1234") == 0) {
        printf("Welcome!\n");
    } 
    else if (strcmp(s1, "user2") == 0 && strcmp(s2, "5678") == 0) {
        printf("Welcome!\n");
    }
    else {
        printf("Error Username or Password\n");
    }
    
    return 0;
=======
#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    char s2[100];

    printf("LOGIN SYSTEM\n");
    printf("Username: ");
    gets(s1);
    printf("Password: ");
    gets(s2);
    if (strcmp(s1, "admin") == 0 && strcmp(s2, "admin") == 0) {
        printf("Welcome my lovely admin!\n");
    }
    else if (strcmp(s1, "user1") == 0 && strcmp(s2, "1234") == 0) {
        printf("Welcome!\n");
    } 
    else if (strcmp(s1, "user2") == 0 && strcmp(s2, "5678") == 0) {
        printf("Welcome!\n");
    }
    else {
        printf("Error Username or Password\n");
    }
    
    return 0;
>>>>>>> a08679c (lab10 submission)
}