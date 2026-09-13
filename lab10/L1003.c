#include <stdio.h>
#include <string.h>
int main()
{
   char s1[100];
   char s2[100];
   printf("Enter your string (s1): ");
   gets(s1);
   printf("Enter your string (s2): ");
   gets(s2);
   printf("\nBefore\n");
   puts(s1);
   puts(s2);
   strcpy(s2, "No Data");
   printf("\nAfter\n");
   puts(s1);
   puts(s2);
   return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
   char s1[100];
   char s2[100];
   printf("Enter your string (s1): ");
   gets(s1);
   printf("Enter your string (s2): ");
   gets(s2);
   printf("\nBefore\n");
   puts(s1);
   puts(s2);
   strcat(s1, s2);
   printf("\nAfter\n");
   puts(s1);
   printf("There are %d characters in s1\n", strlen(s1));
   return 0;
}