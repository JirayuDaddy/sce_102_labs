#include <stdio.h>
#include <stdlib.h>
int main() {
	int numbers[12] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int *ptr = numbers;
	printf("original ::: ");
	for (int i = 0; i < 12; i++) {
		printf("%d%s", *(ptr + i), i == 11 ? "\n" : " ");
	}
	printf("multiplied ::: ");
	for (int i = 0; i < 12; i++) {
		printf("%d%s", *(ptr + i) * 24, i == 11 ? "\n" : " ");
	}
	return 0;
}