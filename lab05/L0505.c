#include <stdio.h>

int main ()
{
    int score ,highest ,lowest , highest_student , lowest_student;
    int count = 0 ;
    int all=0 ;
    float average_score ;

    printf("student score calculator \n\n ");
    while (1){
        printf("Enter score for student %d: ", count +1);
        scanf("%d",&score);

        if (score < 0){
        break;
        }
        all += score ;
        count++;

        if (count == 1){
        highest = score;
        lowest = score;
        highest_student =1;
        lowest_student =1;
        }

        else{
            if (score > highest){
            highest = score;
            highest_student = count;
        }
            if (lowest > score){
                lowest = score;
                lowest_student = count;
            }
        }
    }
        if (count > 0){
            average_score = (float)all / count;
        
        printf("aveerge Socre : %.2f\n", average_score);
        printf("highest_student: %d,by student %d\n", highest , highest_student);
        printf("lowest_student: %d,by student %d\n",lowest, lowest_student);
        }
        return 0;
}