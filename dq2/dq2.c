#include <stdio.h>

void increaseScores(int *scores, int count, int scoreIncrease)
{
    for (int i = 0; i < count; i++)
    {
        scores[i] += scoreIncrease;
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
    int studentIndex;
    int scoreIncrease;
    int scores[5][3];
    printf("\nStudent Score System\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("Test %d :: ", j + 1);
            scanf("%d", &scores[i][j]);
        }
    }

    printf("Select Student to increase scores  :: \n");
    scanf("%d", &studentIndex);
    printf("How much score to increase? :: \n");
    scanf("%d", &scoreIncrease);
    if (studentIndex < 1 || studentIndex > 5)
    {
        printf("Invalid student index\n");
        return 1;
    }

    increaseScores(scores[studentIndex - 1], 3, scoreIncrease);

    printf("\nIncrease all scores by %d? (y/n) : ", scoreIncrease);
    char choice;
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y')
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Test %d :: %d\n", j + 1, scores[studentIndex - 1][j]);
        }
    }

    printf("\nTotal Score :: %d\n", calculateTotal(scores[studentIndex - 1], 3));
    printf("Result ::");
    if (calculateTotal(scores[studentIndex - 1], 3) >= 150)
    {
        printf("PASS\n");
    }
    else
    {
        printf("FAIL\n");
    }
    return 0;
}
