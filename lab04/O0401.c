#include <stdio.h>

int main() {
    
    float s1, s2, s3, s4, s5;
    float average;
    char grade;


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


    average = (s1 + s2 + s3 + s4 + s5) / 5.0;


    if (average >= 80) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 60) {
        grade = 'C';
    } else {
        grade = 'F';
    }


    printf("\nAverage score %.2f\n", average);
    printf("Average grade is %c\n", grade);

    return 0;
}
