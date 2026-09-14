#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    char s2[100];
    printf("Enter your string (s1): ");
    gets(s1);
    printf("Enter your string (s2): ");
    gets(s2);
    printf("\nBefore\n");
    puts(s1);
    puts(s2);
    strcpy(s1,s2);
    printf("\nAfter\n");
    puts(s1);
    printf("There are %d characters in s1",(int)strlen(s1));
}