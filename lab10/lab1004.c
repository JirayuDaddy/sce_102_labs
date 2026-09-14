#include <stdio.h>
#include <string.h>

char *gets(char *text);

int main(void) {
	char s1[200];
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
	printf("There are %zu characters in s1\n", strlen(s1));

	return 0;
}
