#include <stdio.h>
#include <stdlib.h>

int main(){
    int score = 0 , student = 1, student_count = 0 ,sum_score = 0 ,highest_score = -1,highest_student = 0,lowest_score = 999,lowest_student = 0
    
    printf("Student score calculator\n");
    
    do
    {
        printf("Enter score for student %d: ", student);
        scanf("%d", &score);
 
        if (score > highest_score)
        {
            highest_score = score;
            highest_student = student;
            
        }
        if (score < lowest_score && score > -1)
        {
            lowest_score = score;
            lowest_student = student;
        }
        if (score < 0)
        {
            break;
        }
        
        student++;
        student_count++;
        sum_score = score + sum_score;
    } while (score > -1);

    
    printf("Average score :: %.2f\n", (float)sum_score / student_count);
    printf("Highest score :: %d, by student %d\n", highest_score, highest_student);
    printf("Lowest score :: %d, by student %d\n", lowest_score, lowest_student);

    return 0;
}