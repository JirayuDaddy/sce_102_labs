#include <stdio.h>
#include <string.h>


int main()
{
    int s1_len;
    char s1[100];
    char s2[100];
    printf("Enter your string (s1) : ");
    gets(s1);
    printf("Enter your string (s2) : ");
    gets(s2);
    printf("\nBefore\n");
    puts(s1);
    puts(s2);
    printf("\nAfter\n");
    strcat(s1,s2);
    puts(s1);
    s1_len = strlen(s1);
    printf("There are %d characters in s1",s1_len);
    return 0;
}