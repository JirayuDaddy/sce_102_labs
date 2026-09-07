#include <stdio.h>

#define STUDENT_COUNT 5
#define TEST_COUNT    3
#define PASS_SCORE    150

#define MIN_SCORE 0
#define MAX_SCORE 100

static int readIntInRange(int min, int max, int *out)
{
    for (;;) {
        int result = scanf("%d", out);

        if (result == EOF) {
            fprintf(stderr, "\nInput ended unexpectedly.\n");
            return -1;
        }

        if (result != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            printf("Invalid input, please enter a whole number: ");
            continue;
        }

        if (*out < min || *out > max) {
            printf("Please enter a value between %d and %d: ", min, max);
            continue;
        }

        return 0;
    }
}

static int readYesNo(void)
{
    char choice;
    int result = scanf(" %c", &choice);
    return (result == 1) && (choice == 'y' || choice == 'Y');
}

static void increaseScores(int *scores, int count)
{
    for (int i = 0; i < count; i++) {
        scores[i] += 5;
    }
}

static int calculateTotal(const int *scores, int count)
{
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += scores[i];
    }
    return total;
}

static void displayStudent(const int scores[TEST_COUNT], int studentNumber)
{
    printf("\nStudent %d\n", studentNumber);
    printf("----------------\n");

    for (int test = 0; test < TEST_COUNT; test++) {
        printf("Test %d :: %d\n", test + 1, scores[test]);
    }
}

static void displayStudentScores(int scores[STUDENT_COUNT][TEST_COUNT])
{
    for (int student = 0; student < STUDENT_COUNT; student++) {
        displayStudent(scores[student], student + 1);
    }
}

int main(void)
{
    int scores[STUDENT_COUNT][TEST_COUNT];
    int selectedStudent;

    printf("Student Score System\n");

    for (int student = 0; student < STUDENT_COUNT; student++) {
        printf("\nEnter scores for Student %d\n", student + 1);

        for (int test = 0; test < TEST_COUNT; test++) {
            printf("Test %d: ", test + 1);
            if (readIntInRange(MIN_SCORE, MAX_SCORE,
                                &scores[student][test]) != 0) {
                return 1;
            }
        }
    }

    displayStudentScores(scores);

    printf("\nSelect student (1-%d): ", STUDENT_COUNT);
    if (readIntInRange(1, STUDENT_COUNT, &selectedStudent) != 0) {
        return 1;
    }

    printf("\nIncrease all scores by 5? (y/n): ");
    if (readYesNo()) {
        increaseScores(scores[selectedStudent - 1], TEST_COUNT);
    }

    displayStudent(scores[selectedStudent - 1], selectedStudent);

    int total = calculateTotal(scores[selectedStudent - 1], TEST_COUNT);

    printf("\nTotal Score :: %d\n", total);
    printf("Result      :: %s\n", total >= PASS_SCORE ? "PASS" : "FAIL");

    return 0;
}