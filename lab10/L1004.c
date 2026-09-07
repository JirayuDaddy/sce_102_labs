#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>

int main() {
    char s1[101];
    char s2[101];

    printf("Enter your string (s1): ");
    gets(s1);
    printf("Enter your string (s2): ");
    gets(s2);

    printf("Before\n");
    puts(s1);
    puts(s2);

    strcat(s1, s2);

    puts(s1);
    printf("There are %zu characters in s1\n", strlen(s1));

    return 0;
}