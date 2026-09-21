#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function สำหรับเพิ่มคะแนน
void sc1(int *score, int atm, int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        *(score + i) += atm;
    }
}

// Function สำหรับหาคะแนนรวม
int sc2(int *score, int count)
{
    int i;
    int sc = 0;

    for (i = 0; i < count; i++)
    {
        sc += *(score + i);
    }

    return sc;
}

int main()
{
    int scores[5][3];
    int i, j, student, total;
    char choice;

    printf("Student Score System\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Student %d\n", i + 1);
        printf("----------------\n");

        for (j = 0; j < 3; j++)
        {
            printf("Test %d :: ", j + 1);
            scanf("%d", &scores[i][j]);
        }

        printf("\n");
    }

    printf("All Scores\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Student %d\n", i + 1);
        printf("----------------\n");

        for (j = 0; j < 3; j++)
        {
            printf("Test %d :: %d\n", j + 1, scores[i][j]);
        }

        printf("\n");
    }

    printf("Select student: ");
    scanf("%d", &student);

    printf("Increase all scores by 5? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y')
    {
        sc1(scores[student - 1], 5, 3);
    }

    printf("\nStudent %d\n", student);
    printf("----------------\n");

    for (j = 0; j < 3; j++)
    {
        printf("Test %d :: %d\n", j + 1, scores[student - 1][j]);
    }

    total = sc2(scores[student - 1], 3);

    printf("\nTotal Score :: %d\n", total);

    if (total >= 150)
    {
        printf("Result :: PASS\n");
    }
    else
    {
        printf("Result :: FAIL\n");
    }

    return 0;
}