
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SIZE 3
#define MAX_PIECES 3
#define MAX_ROUNDS 3
#define WIN_THRESHOLD 2
#define MAX_NAME_LEN 50
#define AI_DEPTH 5

// เก็บข้อมูลของผู้เล่นแต่ละคน
typedef struct {
    char name[MAX_NAME_LEN];
    char symbol;
    int score;
    int rounds_won;
    int is_bot;
} Player;

// เก็บสถานะเกมสำหรับจำลองการเดินหมาก
typedef struct {
    char board[SIZE][SIZE];
    int moveCount[2];
    int moveRow[2][MAX_PIECES];
    int moveCol[2][MAX_PIECES];
} GameState;

// ตัวแปร Global สำหรับกระดานและประวัติการเดินหมาก
char board[SIZE][SIZE];
int moveCount[2] = {0, 0};
int moveRow[2][MAX_PIECES];
int moveCol[2][MAX_PIECES];

// Function Prototypes
void clearBuffer();
void initializeBoard();
void displayBoard();
int getPlayerIndex(char player);
int makeMove(char player, int row, int col);
int checkWin(char player);
void getBotMove(int *row, int *col, char bot);
void saveState(GameState *state);
void restoreState(GameState *state);
int evaluateBoard(char bot);
int minimax(int depth, char current, char bot, int alpha, int beta);
void playGame(Player p1, Player p2);

// ล้างข้อมูลที่เหลืออยู่ใน Input Buffer
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// บันทึกสถานะปัจจุบันของเกม
void saveState(GameState *state) {
    memcpy(state->board, board, sizeof(board));
    memcpy(state->moveCount, moveCount, sizeof(moveCount));
    memcpy(state->moveRow, moveRow, sizeof(moveRow));
    memcpy(state->moveCol, moveCol, sizeof(moveCol));
}

// คืนสถานะเกมกลับไปก่อนการจำลอง
void restoreState(GameState *state) {
    memcpy(board, state->board, sizeof(board));
    memcpy(moveCount, state->moveCount, sizeof(moveCount));
    memcpy(moveRow, state->moveRow, sizeof(moveRow));
    memcpy(moveCol, state->moveCol, sizeof(moveCol));
}

// เริ่มต้นกระดานใหม่ในแต่ละรอบ
void initializeBoard() {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            board[row][col] = ' ';
        }
    }

    moveCount[0] = 0;
    moveCount[1] = 0;
}

// แสดงกระดาน XO
void displayBoard() {
    printf("\n   1   2   3\n");

    for (int row = 0; row < SIZE; row++) {
        printf("%d  ", row + 1);

        for (int col = 0; col < SIZE; col++) {
            printf("%c", board[row][col]);

            if (col < SIZE - 1) {
                printf(" | ");
            }
        }

        printf("\n");

        if (row < SIZE - 1) {
            printf("  ---+---+---\n");
        }
    }

    printf("\n");
}

// หาตำแหน่งของผู้เล่นใน Array
// X ใช้ Index 0 และ O ใช้ Index 1
int getPlayerIndex(char player) {
    return (player == 'X') ? 0 : 1;
}

// วางหมากลงบนกระดาน
// หากมีหมากครบ 3 ตัว จะนำหมากที่เก่าที่สุดออกก่อน
int makeMove(char player, int row, int col) {

    // ตรวจสอบว่าตำแหน่งอยู่ในกระดานหรือไม่
    if (row < 0 || row >= SIZE ||
        col < 0 || col >= SIZE) {
        return 0;
    }

    // ตรวจสอบว่าช่องว่างหรือไม่
    if (board[row][col] != ' ') {
        return 0;
    }

    int playerIndex = getPlayerIndex(player);
    int *count = &moveCount[playerIndex];

    // หากมีหมากครบ 3 ตัว ให้นำหมากเก่าสุดออก
    if (*count == MAX_PIECES) {
        int oldRow = moveRow[playerIndex][0];
        int oldCol = moveCol[playerIndex][0];

        board[oldRow][oldCol] = ' ';

        // เลื่อนประวัติหมากเพื่อให้ตัวเก่าสุดถูกลบ
        for (int i = 0; i < MAX_PIECES - 1; i++) {
            moveRow[playerIndex][i] =
                moveRow[playerIndex][i + 1];

            moveCol[playerIndex][i] =
                moveCol[playerIndex][i + 1];
        }

        (*count)--;
    }

    // วางหมากตัวใหม่
    board[row][col] = player;

    moveRow[playerIndex][*count] = row;
    moveCol[playerIndex][*count] = col;

    (*count)++;

    return 1;
}

// ตรวจสอบว่าผู้เล่นชนะหรือไม่
int checkWin(char player) {

    // ตรวจสอบแถวและคอลัมน์
    for (int i = 0; i < SIZE; i++) {

        if (board[i][0] == player &&
            board[i][1] == player &&
            board[i][2] == player) {
            return 1;
        }

        if (board[0][i] == player &&
            board[1][i] == player &&
            board[2][i] == player) {
            return 1;
        }
    }

    // ตรวจสอบแนวทแยงทั้งสองด้าน
    if (board[0][0] == player &&
        board[1][1] == player &&
        board[2][2] == player) {
        return 1;
    }

    if (board[0][2] == player &&
        board[1][1] == player &&
        board[2][0] == player) {
        return 1;
    }

    return 0;
}

// ประเมินคะแนนของกระดาน
// คะแนนสูงหมายถึงสถานการณ์ได้เปรียบสำหรับบอท
int evaluateBoard(char bot) {

    char opponent = (bot == 'X') ? 'O' : 'X';

    int score = 0;

    // เก็บตำแหน่งของแถว คอลัมน์ และแนวทแยง
    int lines[8][3][2] = {
        {{0,0}, {0,1}, {0,2}},
        {{1,0}, {1,1}, {1,2}},
        {{2,0}, {2,1}, {2,2}},

        {{0,0}, {1,0}, {2,0}},
        {{0,1}, {1,1}, {2,1}},
        {{0,2}, {1,2}, {2,2}},

        {{0,0}, {1,1}, {2,2}},
        {{0,2}, {1,1}, {2,0}}
    };

    // ประเมินความเป็นไปได้ในการเรียงหมาก 3 ตัว
    for (int i = 0; i < 8; i++) {

        int botCount = 0;
        int opponentCount = 0;

        for (int j = 0; j < SIZE; j++) {
            int r = lines[i][j][0];
            int c = lines[i][j][1];

            if (board[r][c] == bot) {
                botCount++;
            } else if (board[r][c] == opponent) {
                opponentCount++;
            }
        }

        // ให้คะแนนตามจำนวนหมากในแนวเดียวกัน
        if (opponentCount == 0) {
            if (botCount == 1) score += 3;
            if (botCount == 2) score += 25;
        }

        // หากคู่แข่งมีหมากในแนวนี้ ให้ประเมินความเสี่ยง
        if (botCount == 0) {
            if (opponentCount == 1) score -= 3;
            if (opponentCount == 2) score -= 30;
        }
    }

    // ให้ความสำคัญกับช่องกลาง
    if (board[1][1] == bot) {
        score += 5;
    } else if (board[1][1] == opponent) {
        score -= 5;
    }

    return score;
}

// Minimax พร้อม Alpha-Beta Pruning
// จำลองการเดินล่วงหน้าหลายตาเพื่อหาทางเลือกที่ดี
int minimax(int depth, char current, char bot,
            int alpha, int beta) {

    char opponent = (bot == 'X') ? 'O' : 'X';

    // ตรวจสอบผลลัพธ์ของสถานะปัจจุบัน
    if (checkWin(bot)) {
        return 1000 + depth;
    }

    if (checkWin(opponent)) {
        return -1000 - depth;
    }

    // เมื่อถึงความลึกที่กำหนด ให้ใช้คะแนนประเมินกระดาน
    if (depth == 0) {
        return evaluateBoard(bot);
    }

    int maximizing = (current == bot);
    int bestScore = maximizing ? -100000 : 100000;
    int foundMove = 0;

    for (int r = 0; r < SIZE; r++) {
        for (int c = 0; c < SIZE; c++) {

            // ทดลองเฉพาะช่องที่ว่าง
            if (board[r][c] != ' ') {
                continue;
            }

            GameState state;
            saveState(&state);

            // จำลองการเดินหมากตามกติกาจริง
            makeMove(current, r, c);

            int score;

            if (checkWin(current)) {

                // ให้คะแนนสูงหากบอทชนะ
                // และคะแนนต่ำหากคู่แข่งชนะ
                if (current == bot) {
                    score = 1000 + depth;
                } else {
                    score = -1000 - depth;
                }

            } else {

                char next = (current == 'X') ? 'O' : 'X';

                score = minimax(
                    depth - 1, next, bot, alpha, beta
                );
            }

            // คืนสถานะเพื่อทดลองช่องอื่นต่อ
            restoreState(&state);

            foundMove = 1;

            if (maximizing) {
                if (score > bestScore) {
                    bestScore = score;
                }

                if (bestScore > alpha) {
                    alpha = bestScore;
                }

            } else {
                if (score < bestScore) {
                    bestScore = score;
                }

                if (bestScore < beta) {
                    beta = bestScore;
                }
            }

            // ตัดกิ่งที่ไม่จำเป็นต่อการค้นหา
            if (beta <= alpha) {
                return bestScore;
            }
        }
    }

    if (!foundMove) {
        return evaluateBoard(bot);
    }

    return bestScore;
}

// บอทเลือกช่องที่มีโอกาสให้ผลลัพธ์ดีที่สุด
void getBotMove(int *row, int *col, char bot) {

    int bestScore = -100000;
    int foundMove = 0;

    char opponent = (bot == 'X') ? 'O' : 'X';

    for (int r = 0; r < SIZE; r++) {
        for (int c = 0; c < SIZE; c++) {

            // ข้ามช่องที่มีหมากอยู่แล้ว
            if (board[r][c] != ' ') {
                continue;
            }

            GameState state;
            saveState(&state);

            // ทดลองวางหมากของบอท
            makeMove(bot, r, c);

            int score;

            if (checkWin(bot)) {
                // หากชนะได้ทันที ให้เลือกช่องนี้
                score = 10000;
            } else {
                // คาดการณ์การตอบโต้ของคู่แข่ง
                score = minimax(
                    AI_DEPTH - 1,
                    opponent,
                    bot,
                    -100000,
                    100000
                );
            }

            // คืนกระดานกลับสู่สถานะจริง
            restoreState(&state);

            // บันทึกช่องที่ได้คะแนนดีที่สุด
            if (!foundMove || score > bestScore) {
                bestScore = score;
                *row = r;
                *col = c;
                foundMove = 1;
            }
        }
    }
}

// ระบบเล่นเกมหลัก
void playGame(Player p1, Player p2) {

    printf("\n==================================================\n");
    printf("       Memory Tic-Tac-Toe (Best of 3 Rounds)\n");
    printf("       Maximum 3 pieces per player\n");
    printf("==================================================\n");

    int current_round = 1;

    // เล่นจนกว่าจะมีผู้ชนะ 2 รอบ หรือครบ 3 รอบ
    while (p1.rounds_won < WIN_THRESHOLD &&
           p2.rounds_won < WIN_THRESHOLD &&
           current_round <= MAX_ROUNDS) {

        initializeBoard();

        Player *turn = &p1;
        int round_over = 0;

        printf("\n==========================================\n");
        printf("                 Round %d\n", current_round);
        printf("==========================================\n");

        while (!round_over) {

            displayBoard();

            int row, col;

            if (turn->is_bot) {

                printf("%s (%c) is thinking...\n",
                       turn->name, turn->symbol);

                getBotMove(&row, &col, turn->symbol);

                printf("%s picked row %d, col %d\n",
                       turn->name, row + 1, col + 1);

            } else {

                printf("%s (%c), it's your turn.\n",
                       turn->name, turn->symbol);

                printf("Enter row and column (1-3)");
                printf(" or enter 0 0 to quit: ");

                if (scanf("%d %d", &row, &col) != 2) {
                    printf("Invalid input!\n");
                    clearBuffer();
                    continue;
                }

                if (row == 0 && col == 0) {
                    printf("\nMatch terminated by player.\n");
                    return;
                }

                // เปลี่ยนตำแหน่งจาก 1-3 เป็น Index 0-2
                row--;
                col--;
            }

            // ตรวจสอบและวางหมาก
            if (makeMove(turn->symbol, row, col)) {

                if (checkWin(turn->symbol)) {

                    displayBoard();

                    printf("%s won Round %d!\n",
                           turn->name, current_round);

                    turn->rounds_won++;
                    turn->score += 100;

                    round_over = 1;

                } else {

                    // สลับตาไปยังผู้เล่นอีกคน
                    turn = (turn->symbol == p1.symbol)
                           ? &p2 : &p1;
                }

            } else if (!turn->is_bot) {

                printf("Invalid move! Try again.\n");
            }
        }

        printf("\nScore after Round %d:\n", current_round);

        printf("%s: %d round(s) | %s: %d round(s)\n",
               p1.name, p1.rounds_won,
               p2.name, p2.rounds_won);

        current_round++;
    }

    // แสดงผลการแข่งขันทั้งหมด
    printf("\n==========================================\n");
    printf("           Final Match Summary\n");
    printf("==========================================\n");

    if (p1.rounds_won > p2.rounds_won) {
        printf("Match Winner: %s!\n", p1.name);
    } else if (p2.rounds_won > p1.rounds_won) {
        printf("Match Winner: %s!\n", p2.name);
    } else {
        printf("Match Result: It's a draw!\n");
    }

    printf("Total Scores -> %s: %d pts | %s: %d pts\n",
           p1.name, p1.score, p2.name, p2.score);

    printf("==========================================\n");
}

// จุดเริ่มต้นของโปรแกรม
int main() {

    // ตั้งค่า Seed สำหรับการสุ่ม หากต้องใช้เพิ่มเติมในอนาคต
    srand((unsigned int)time(NULL));

    int menu;
    Player p1, p2;

    // กำหนดค่าเริ่มต้นให้ผู้เล่นคนที่ 1
    p1.symbol = 'X';
    p1.score = 0;
    p1.rounds_won = 0;
    p1.is_bot = 0;

    // กำหนดค่าเริ่มต้นให้ผู้เล่นคนที่ 2
    p2.symbol = 'O';
    p2.score = 0;
    p2.rounds_won = 0;
    p2.is_bot = 0;

    printf("\n");
    printf("================================\n");
    printf("             XO Game            \n");
    printf("================================\n");
    printf("  [1] Play with Bot\n");
    printf("  [2] Play with Friend\n");
    printf("  [0] Exit Game\n");
    printf("================================\n");
    printf("Select Menu: ");

    if (scanf("%d", &menu) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    clearBuffer();

    switch (menu) {

        case 1:

            printf("\nYou selected Play with Bot!\n");
            printf("Enter your name: ");

            if (fgets(p1.name, MAX_NAME_LEN, stdin) == NULL) {
                return 1;
            }

            p1.name[strcspn(p1.name, "\n")] = '\0';

            strcpy(p2.name, "Bot");
            p2.is_bot = 1;

            printf("\n--- Game Started: %s VS %s ---\n",
                   p1.name, p2.name);

            playGame(p1, p2);

            break;

        case 2:

            printf("\nYou selected Play with Friend!\n");

            printf("Enter Player 1 name: ");

            if (fgets(p1.name, MAX_NAME_LEN, stdin) == NULL) {
                return 1;
            }

            p1.name[strcspn(p1.name, "\n")] = '\0';

            printf("Enter Player 2 name: ");

            if (fgets(p2.name, MAX_NAME_LEN, stdin) == NULL) {
                return 1;
            }

            p2.name[strcspn(p2.name, "\n")] = '\0';

            printf("\n--- Game Started: %s VS %s ---\n",
                   p1.name, p2.name);

            playGame(p1, p2);

            break;

        case 0:

            printf("\nThank you for playing!\n");
            printf("Exiting game...\n");

            break;

        default:

            printf("\nInvalid menu! Please try again.\n");

            break;
    }

    return 0;
}
