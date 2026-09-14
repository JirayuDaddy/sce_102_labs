#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void increaseScores(int *scores, int count)
{
    for (int i = 0; i < count; i++)
    {
        scores[i] += 5;
    }
}

int calculateTotal(int *scores, int count)
{
    int total = 0;

    for (int i = 0; i < count; i++)
    {
        total += scores[i];
    }
    return total;
}

int main()
{
    int scores[5][3];
    int studentNumber;
    char increase;

    printf("Student score system\n\n");

    for (int student = 0; student < 5; student++)
    {
        printf("Enter scores for student %d (3 scores):\n", student + 1);
        for (int exam = 0; exam < 3; exam++)
        {
            scanf("%d", &scores[student][exam]);
        }
    }

    printf("\nAll student scores:\n");
    for (int student = 0; student < 5; student++)
    {
        printf("Student %d: \n\n", student + 1);
        for (int exam = 0; exam < 3; exam++)
        {
            printf("Test %d :: %d\n", exam + 1, scores[student][exam]);
        }
        printf("\n");
    }

    printf("\nSelect a student (1-5): ");
    scanf("%d", &studentNumber);

    if (studentNumber < 1 || studentNumber > 5)
    {
        printf("Invalid student number.\n");
        return 1;
    }

    printf("Increase all scores by 5? (y/n): ");
    scanf(" %c", &increase);

    if (increase == 'y' || increase == 'Y')
    {
        increaseScores(scores[studentNumber - 1], 3);
    }

    int total = calculateTotal(scores[studentNumber - 1], 3);
    printf("\nStudent %d total: %d\n", studentNumber, total);
    printf("Result: %s\n", total >= 150 ? "PASS" : "FAIL");

    
    
    
    return 0;
}