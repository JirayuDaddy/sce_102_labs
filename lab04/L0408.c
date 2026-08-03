#include <stdio.h>
int main() {
    float s1, s2, s3, s4, s5;
    float average_score;
    char average_grade;

    printf("Enter s1 score: ");
    scanf("%f", &s1);
    printf("Enter s2 score: ");
    scanf("%f", &s2);
    printf("Enter s3 score: ");
    scanf("%f", &s3);
    printf("Enter s4 score: ");
    scanf("%f", &s4);
    printf("Enter s5 score: ");
    scanf("%f", &s5);

    printf("\n");
    average_score = (s1 + s2 + s3 + s4 + s5)/5.0;

    if (average_score >= 80.0) {
        average_grade = 'A';
    } else if (average_score >= 70.0) {
        average_grade = 'B';
    } else if (average_score >= 60.0) {
        average_grade = 'C';
    } else {
        average_grade = 'F';
    }
    printf("Average score %.2f\n", average_score);
    printf("Average grade is %c\n", average_grade);

    return 0;
}