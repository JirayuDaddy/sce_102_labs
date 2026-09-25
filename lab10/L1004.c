#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[100];
    char s2[100];
    printf("Enter your string (s1): ");
    gets(s1);
    printf("Enter your string (s2): ");
    gets(s2);
    printf("Before\n");
    puts(s1);
    puts(s2);
    strcat(s1, s2);
    printf("After\n");
    puts(s1);
    printf("There are %zu characters in s1\n", strlen(s1));
    return 0;
}
