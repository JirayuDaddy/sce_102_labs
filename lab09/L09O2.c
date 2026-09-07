#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 25

void print_board(int *board, int *player_ptr) {
    printf("Board : : ");
    for (int i = 0; i < BOARD_SIZE; i++) {
        int current_slot = board[i];
        
        if (&board[i] == player_ptr) {
            printf("(%d) ", current_slot);
        } 
        else if (current_slot % 10 == 4) {
            printf("_%d_ ", current_slot);
        } 
        else {
            printf("%d ", current_slot);
        }
    }
    printf("\n");
}

int main() {
    int board[BOARD_SIZE];
    for (int i = 0; i < BOARD_SIZE; i++) {
        board[i] = i + 1;
    }

    int *player_pos = &board[0];
    
    srand(time(NULL));
    
    char choice;
    printf("Snake and Ladder\n\n");

    while (1) {
        print_board(board, player_pos);
        
        printf("Roll dice?(y): ");
        scanf(" %c", &choice);
        
        int dice = (rand() % 6) + 1;
        printf("You got %d\n", dice);
        
        int current_index = player_pos - board;
        int next_index = current_index + dice;
        
        if (next_index >= BOARD_SIZE - 1) {
            player_pos = &board[BOARD_SIZE - 1]; 
            print_board(board, player_pos); 
            printf("\nFINISH !");
            break;                               
        }
        
        player_pos = &board[next_index];
        
        if ((*player_pos) % 10 == 4) {
            next_index = next_index - 3;
            if (next_index < 0) {
                next_index = 0;
            }
            player_pos = &board[next_index];
        }
    }

    return 0;
}
