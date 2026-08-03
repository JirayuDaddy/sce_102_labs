#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score, score_high, score_low, student_high, student_low;
    int student = 0;
    float sum = 0;

    printf("Student score calculator\n\n");
    while (score >= 0)
    {
        printf("Enter score for student %d: ", student + 1);
        scanf("%d", &score);
        if (score < 0)
            break;
        student++;
        sum = sum + score;
        if (student == 1)
        {
            score_high = score;
            score_low = score;
            student_high = 1;
            student_low = 1;
        }
        if (score > score_high)
        {
            score_high = score;
            student_high = student;
        }
        if (score < score_low)
        {
            score_low = score;
            student_low = student;
        }
    }

    printf("\nAverage score :: %.2f", sum / student);
    printf("\nHighest score :: %d, by student %d", score_high, student_high);
    printf("\nLowest score  :: %d, by student %d", score_low, student_low);
    return 0;
}