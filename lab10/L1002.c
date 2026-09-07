#define _GNU_SOURCE
#include <stdio.h>

int main() {
    char s1[101];
    char s2[101];

    printf("Enter your full name (s1): ");
    gets(s1);
    printf("Enter your full name again (s2): ");
    scanf("%100s", s2);

    printf("Results\n");
    puts(s1);
    puts(s2);

    return 0;
}