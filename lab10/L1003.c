#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    char s2[100];
    char no_date[8] = "No Date";

    printf("Enter your string (s1): ");
    gets(s1);
    printf("Enter your string (s2): ");
    gets(s2);

    printf("\nBefore\n");
    puts(s1);
    puts(s2);

    printf("\nAfter\n");
    strcpy(s2,no_date);
    puts(s1);
    puts(s2);
    return 0;
}