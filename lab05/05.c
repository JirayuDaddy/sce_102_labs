#include <stdio.h>

int main() {
int score;
int student_num = 1;
int count = 0;
int sum = 0;
int max_score = 0, max_student = 0;
int min_score = 0, min_student = 0;
printf("Student score calculator\n\n");
while (1) {
printf("Enter score for student %d: ", student_num);
scanf("%d", &score);
if (score < 0) {
break;
}
if (count == 0) {
max_score = score;
max_student = student_num;
min_score = score;
min_student = student_num;
} else {
if (score > max_score) {
max_score = score;
max_student = student_num;
}
if (score < min_score) {
min_score = score;
min_student = student_num;
}
}
sum += score;
count;
student_num;
}
if (count > 0) {
printf("\nAverage score :: %.2f\n", (float)sum / count);
printf("Highest score :: %d, by student %d\n", max_score, max_student);
printf("Lowest score :: %d, by student %d\n", min_score, min_student);
}
return 0;
}