#include <stdio.h>

int main(){
    int score;
    int student = 0;
    printf("Student score calculator");
    
    do
    {
        printf("Enter score for student %d: ", student+1,score);
        scanf("%d", student);
        student++;
    } while (score < 0);
    



    return 0;
}