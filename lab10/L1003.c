<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    char s2[100];

    printf("Enter your full name (s1): ");
    gets(s1);
    printf("Enter your full name again (s2): ");
    gets(s2);
    printf("Before\n");
    puts(s1);
    puts(s2);
    strcpy(s2, "No Data");
    printf("After\n");
    puts(s1);
    puts(s2);
    
    return 0;
=======
#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    char s2[100];

    printf("Enter your full name (s1): ");
    gets(s1);
    printf("Enter your full name again (s2): ");
    gets(s2);
    printf("Before\n");
    puts(s1);
    puts(s2);
    strcpy(s2, "No Data");
    printf("After\n");
    puts(s1);
    puts(s2);
    
    return 0;
>>>>>>> a08679c (lab10 submission)
}