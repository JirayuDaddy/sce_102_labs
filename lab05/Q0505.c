#include <stdio.h>
int main(void){
    int score;
    int student_count = 0,total_score = 0;
    int highest_score = 0,lowest_score = 0;
    int highest_student = 0,lowest_student = 0;
    printf("Student score calculator\n\n");
    do{
        printf("Enter score for student %d: ", student_count + 1);
        scanf("%d", &score);
        if(score >= 0){
            student_count++;
            total_score += score;
            if(student_count == 1 || score > highest_score){
                highest_score = score;
                highest_student = student_count;}
            if(student_count == 1 || score < lowest_score){
                lowest_score = score;
                lowest_student = student_count;}}
    }while(score >= 0);
    if(student_count > 0){
        printf("\nAverage score :: %.2f\n", (double)total_score / student_count);
        printf("Highest score :: %d, by student %d\n", highest_score, highest_student);
        printf("Lowest score :: %d, by student %d\n", lowest_score, lowest_student);}
    return 0;
}