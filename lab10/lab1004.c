#include <stdio.h>
#include <string.h>
char s1[100];
char s2[100];
int main(){
    printf("Enter your string (s1):  ");
    gets(s1);
    printf("Enter your string (s2):  ");
    gets(s2);
    printf("\nBefore\n");
    puts(s1);
    puts(s2);
    printf("\nAfter\n");
    strcat(s1,s2);
    puts(s1);
    int n = strlen(s1);
    printf("There are %d characters in s1",n);
    return 0;
}