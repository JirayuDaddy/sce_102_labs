#include <stdio.h>
#include <stdlib.h>

int main(){
    int score = 0;
    int student = 1;
    int highestStudent = 0;
    int highestScore = 0;
    int lowestStudent = 0;
    int lowestScore = 999;
    float sum = 0;

    printf("Student score calculator\n\n");
    do
    {
        printf("Enter score for student %d: ", student);
        scanf("%d", &score);

        if(score < 0)
        {
            break;
        }
        if(score > highestScore)
        {
            highestScore = score;
            highestStudent = student;
        }
        if(score < lowestScore)
        {
            lowestScore = score;
            lowestStudent = student;
        }
        student++;
        sum += score;
    }
    while(score > -1);

    student--;

    printf("\nAverage score :: %.2f", sum / student);
    printf("\nHighest score :: %d, by student %d", highestScore, highestStudent);
    printf("\nLowest score :: %d, by student %d", lowestScore, lowestStudent);
    return 0;
}