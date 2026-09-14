#include <stdio.h>

int main()
{
    char s1[100];
    char s2[100];

    printf("Enter your full name (s1): ");
    gets(s1);
    printf("Enter your full name again (s2): ");
    scanf("%s", s2);

    printf("\nResults\n");
    puts(s1);
    puts(s2);

    return 0;
}