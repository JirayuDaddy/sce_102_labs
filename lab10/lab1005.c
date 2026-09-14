#include <stdio.h>
#include <string.h>

int main(void) {
	char username[100];
	char password[100];

	printf("LOGIN SYSTEM\n\n");
	printf("Username: ");
	scanf("%99s", username);
	printf("Password: ");
	scanf("%99s", password);

	if (strcmp(username, "admin") == 0 &&
		strcmp(password, "admin") == 0) {
		printf("\nWelcome my lovely admin!\n");
	} else if (strcmp(username, "user1") == 0 &&
			   strcmp(password, "1234") == 0) {
		printf("\nWelcome!\n");
	} else if (strcmp(username, "user2") == 0 &&
			   strcmp(password, "5678") == 0) {
		printf("\nWelcome!\n");
	} else {
		printf("\nError Username or Password\n");
	}

	return 0;
}
