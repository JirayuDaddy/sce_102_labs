 #include <stdio.h>

int main(void) {
	char s1[20] = {'D', 'i', 'a', 'n', 'a', '\0'};
	char s2[20] = "Diana";

	printf("%s\n", s1);
	printf("%s\n", s2);

	return 0;
}
