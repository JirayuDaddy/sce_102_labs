#include <stdio.h>
#define STUDENT_COUNT 5
#define TEST_COUNT 3
#define PASS_SCORE 150

void increaseScores(int *scores, int count)
{
    for (int i = 0; i < count; i++) {
        scores[i] += 5;
    }
}

int calculateTotal(const int *scores, int count)
{
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += scores[i];
    }
    return total;
}

void displayStudentScores(int scores[STUDENT_COUNT][TEST_COUNT])
{
    for (int student = 0; student < STUDENT_COUNT; student++) {
        printf("\nStudent %d\n", student + 1);
        printf("----------------\n");

        for (int test = 0; test < TEST_COUNT; test++) {
            printf("Test %d :: %d\n", test + 1, scores[student][test]);
        }
    }
}

int main(void)
{
    int scores[STUDENT_COUNT][TEST_COUNT];
    int selectedStudent;
    char choice;

    printf("Student Score System\n");

    for (int student = 0; student < STUDENT_COUNT; student++) {
        printf("\nEnter scores for Student %d\n", student + 1);

        for (int test = 0; test < TEST_COUNT; test++) {
            printf("Test %d: ", test + 1);
            scanf("%d", &scores[student][test]);
        }
    }

    displayStudentScores(scores);

    do {
        printf("\nSelect student (1-%d): ", STUDENT_COUNT);
        scanf("%d", &selectedStudent);
    } while (selectedStudent < 1 || selectedStudent > STUDENT_COUNT);

    printf("\nIncrease all scores by 5? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        increaseScores(scores[selectedStudent - 1], TEST_COUNT);
    }

    printf("\nStudent %d\n", selectedStudent);
    printf("----------------\n");

    for (int test = 0; test < TEST_COUNT; test++) {
        printf("Test %d :: %d\n", test + 1,
               scores[selectedStudent - 1][test]);
    }

    int total = calculateTotal(scores[selectedStudent - 1], TEST_COUNT);

    printf("\nTotal Score :: %d\n", total);
    printf("Result      :: %s\n", total >= PASS_SCORE ? "PASS" : "FAIL");

    return 0;
}
