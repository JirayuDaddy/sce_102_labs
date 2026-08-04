#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int score,score_H,score_L,student_H,student_L;
    int student = 0;
    float n = 0;

    printf("Student score calculator\n\n");
    while(score >= 0)
    {
        printf("Enter score for student %d : ", student + 1);
        scanf("%d", &score);
        if(score < 0)
            break;
        student++;
        n = n + score;
        if (student == 1)
    {
        score_H = score;
        score_L = score;
        student_H = student;
        student_L = student;
    }
        if(score > score_H)
        {
            score_H = score;
            student_H = student;
        }
        if(score < score_L)
        {
            score_L = score;
            student_L = student;
        }
}
    printf("\nAverage score :: %.2f", n/student);
    printf("\nHighest score :: %d (Student %d)\n", score_H, student_H);
    printf("Lowest score :: %d (Student %d)\n", score_L, student_L);
    return 0;
}