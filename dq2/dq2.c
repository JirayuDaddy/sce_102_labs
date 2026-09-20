#include <stdio.h>

void increaseScore(int *score, int amount)
{
    for (int i = 0; i < 3; i++)
    {
        score[i] += amount;
    }
}

int totalScore(int *score, int count)
{
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        total += score[i];
    }
    return total;
}

int main()
{
    int scores[5][3];
    int student;
    char choice;
    int total;

    printf("Student Score System\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d\n", i + 1);
        printf("------------\n");

        for (int j = 0; j < 3; j++)
        {
            printf("Test %d:: ", j + 1);
            scanf("%d", &scores[i][j]);
        }

        printf("\n");
    }

    printf("Select student: ");
    scanf("%d", &student);

    if (student < 1 || student > 5)
    {
        printf("Invalid student number!\n");
        return 0;
    }

    printf("Increase all scores by 5? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y')
    {
        increaseScore(scores[student - 1], 5);
    }

    printf("\nStudent %d\n", student);
    printf("------------\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Test %d: %d\n", i + 1, scores[student - 1][i]);
    }

    total = totalScore(scores[student - 1], 3);
    printf("\nTotal Score:: %d\n", total);

    if (total >= 150)
        printf("Result  :: PASS\n");
    else
        printf("Result  :: FAIL\n");

    return 0;
}