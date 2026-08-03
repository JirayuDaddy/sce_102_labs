#include <stdio.h>

int main(void) {
    double s1, s2, s3, s4, s5, average;
    char grade;

    printf("Enter s1 score: ");
    scanf("%lf", &s1);
    printf("Enter s2 score: ");
    scanf("%lf", &s2);
    printf("Enter s3 score: ");
    scanf("%lf", &s3);
    printf("Enter s4 score: ");
    scanf("%lf", &s4);
    printf("Enter s5 score: ");
    scanf("%lf", &s5);

    average = (s1 + s2 + s3 + s4 + s5) / 5;

    if (average >= 80) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 60) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    printf("Average score %.2f\n", average);
    printf("Average grade is %c\n", grade);

    return 0;
}
