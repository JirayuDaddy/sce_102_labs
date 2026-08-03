#include <stdio.h>
#include <stdlib.h> 

int main() {
        int score,Highest_score,low_score,student_Highest_score,student_low_score;
        int student=0;
        float average=0.00;

        printf("Student score calculator\n ");
        
        score = 0 ;

        while(score >= 0)
        {
            printf("Enter score for student %d : ",student+1);
            scanf("%d",&score);

            if(score < 0){
            break;
            }
            student++;
            average = average + score ;

            if(student == 1)
            {
            Highest_score = score ;
            low_score = score ;
            student_Highest_score = 1 ;
            student_low_score =1 ;
            }
            if(score > Highest_score) {
                    Highest_score = score ;
                    student_Highest_score = student ;
            }
            if(score < low_score) {
                    low_score = score ;
                    student_low_score = student ;
            }
        
        }

        if(student > 0) {
        average = average / student; 
        }   
        printf("Average score :: %.2f \n",average);
        printf("Hight score   :: %d ,by student %d \n",Highest_score,student_Highest_score);
        printf("Lowest score  :: %d ,by student %d",low_score,student_low_score);
        
    return 0 ;
}