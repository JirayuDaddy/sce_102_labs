#include <stdio.h>

int main() {
    int score;
    int student_count = 1;
    int valid_count = 0;
    int total_score = 0;
    
    int max_score = 0;
    int min_score = 0;
    int max_student = 0;
    int min_student = 0;

    printf("Student score calculator\n\n");

    while (1) {
    
        printf("Enter score for student %d: ", student_count);
        scanf("%d", &score);

        if (score < 0) {
            break;
        }

        total_score += score;

        if (valid_count == 0) {
    
            max_score = score;
            min_score = score;
            max_student = student_count;
            min_student = student_count;
        } else {
           
            if (score > max_score) {
                max_score = score;
                max_student = student_count;
            }
            
            if (score < min_score) {
                min_score = score;
                min_student = student_count;
            }
        }

        valid_count++;
        student_count++;
    }

    if (valid_count > 0) {
        double average = (double)total_score / valid_count;
        printf("\nAverage score :: %.2f\n", average);
        printf("Highest score :: %d, by student %d\n", max_score, max_student);
        printf("Lowest score :: %d, by student %d\n", min_score, min_student);
    }

    return 0;
}
