#include <stdio.h>

#define STUDENT_SCORE 5
#define TEST_SCORE 3
#define BONUS_SCORE 5

void increase_scores(int *scores, int count) {
    int *current_score = scores;

    for (int remaining = count; remaining > 0; remaining--) {
        *current_score += BONUS_SCORE;
        current_score++;
    }
}

int calculate_total(int *scores, int count) {
    int *current_score = scores;
    int total = 0;

    for (int remaining = count; remaining > 0; remaining--) {
        total += *current_score;
        current_score++;
    }

    return total;
}

int main(void) {
    int scores[STUDENT_SCORE][TEST_SCORE];
    int student_number;
    char choice;

    printf("Student Score System\n");

    int (*student_row)[TEST_SCORE] = scores;

    for (int student = 1; student <= STUDENT_SCORE; student++) {
        printf("\nStudent %d\n", student);
        printf("----------------\n");

        int *current_score = *student_row;
        for (int test = 1; test <= TEST_SCORE; test++) {
            printf("Test %d: ", test);
            if (scanf("%d", current_score) != 1) {
                printf("Invalid score.\n");
                return 1;
            }
            current_score++;
        }

        student_row++;
    }

    printf("\nAll student scores\n\n");
    student_row = scores;
    for (int student = 1; student <= STUDENT_SCORE; student++) {
        printf("Student %d: ", student);
        int *current_score = *student_row;
        for (int test = 1; test <= TEST_SCORE; test++) {
            printf("%d", *current_score);
            if (test < TEST_SCORE) {
                printf(" ");
            }
            current_score++;
        }
        printf("\n");
        student_row++;
    }

    printf("\nSelect student: ");
    if (scanf("%d", &student_number) != 1) {
        printf("Invalid student number.\n");
        return 1;
    }

    if (student_number < 1 || student_number > STUDENT_SCORE) {
        printf("Invalid student number.\n");
        return 1;
    }

    printf("\nIncrease all scores by 5? (y/n): ");
    if (scanf(" %c", &choice) != 1) {
        printf("Invalid choice.\n");
        return 1;
    }

    if (choice == 'y' || choice == 'Y') {
        int (*selected_student)[TEST_SCORE] = scores + (student_number - 1);
        increase_scores(*selected_student, TEST_SCORE);
    }

    int (*selected_student)[TEST_SCORE] = scores + (student_number - 1);
    printf("\nStudent %d\n", student_number);
    printf("----------------\n");
    int *current_score = *selected_student;
    for (int test = 1; test <= TEST_SCORE; test++) {
        printf("Test %d :: %d\n", test, *current_score);
        current_score++;
    }

    int total = calculate_total(*selected_student, TEST_SCORE);
    printf("\n\nTotal Score :: %d\n", total);
    printf("\nResult :: %s\n", total >= 150 ? "PASS" : "FAIL");

    return 0;
}