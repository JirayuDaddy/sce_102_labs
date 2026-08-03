#include <stdio.h>

int main()
{
    float average=0,score=0,max=0,min=0,sum=0;
    int sequence=0,max_sequence=0,min_sequence=0;
    printf("Student score calculator");
    do{
        printf("\nEnter score for student %d : ",sequence+1);
        scanf("%f",&score);
        sequence++;
        if ( sequence ==1)
        {
            min = score;
        }
        if (score < 0)
        {
            sequence--;
            break;
        }
        if (score < min){
            min = score;
            min_sequence = sequence;
        }
        sum = sum + score;
        if (score > max){
            max = score;
            max_sequence = sequence;
        }
    }while(score>=0);
    average = sum / sequence;
    printf("Average score : %.2f",average);
    printf("\nHighest score : %f, by student %d",max,max_sequence);
    printf("\nLowest score : %f,by student %d",min,min_sequence);
    return 0;
}
