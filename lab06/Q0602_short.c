#include <stdio.h>
#include <stdlib.h>

int main(void){
	const char *moves[] = {"", "Rock", "Scissors", "Paper"};
	int input, cpu = 0;

	printf("Rock - Scissors - Paper");
	printf("\n\nRules\n---------------");
	printf("\nRock > Scissors\nScissors > Paper\nPaper > Rock\n");

	do{
		printf("\nEnter 1.Rock 2.Scissors 3.Paper : ");
		if(scanf("%d", &input) != 1){
			puts("User :: Error Input");
			return 1;
		}
		if(input < 1 || input > 3){
			puts("User :: Error Input");
			continue;
		}
		cpu = rand() % 3 + 1;
		if(input == cpu)
			printf("User :: %s\nCPU :: %s\nIt's a tie!\n", moves[input], moves[cpu]);
	}while(input == cpu || input < 1 || input > 3);

	printf("\nUser :: %s\nCPU :: %s\n%s wins!", moves[input], moves[cpu],
		   input - cpu == -1 || input - cpu == 2 ? "Player" : "CPU");
	return 0;
}
