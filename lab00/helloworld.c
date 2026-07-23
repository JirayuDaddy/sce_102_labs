#include <stdio.h>

int main() {
int first, second;
float real;
char ch;
printf("Enter an integer: ");
scanf("%d", &first);
printf("Enter second integer: ");
scanf("%d", &second);
printf("Enter float: ");
scanf("%f", &real);
printf("Enter a character: ");
scanf(" %c", &ch);
printf("\n");
printf("First integer :| %10d|\n", first);
printf("Second integer:| %10d|\n", second);
printf("Real number   :| %10.2f|\n", real);
printf("Character     :%c\n", ch);
}