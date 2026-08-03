#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score=0,sum=0,max=-9999,min=9999,t=0,i,l;
    float avg;
    printf("Student score calculator\n\n");
    while(score>=0){
        printf("Enter scorefor student %d: ",t+1);
        scanf("%d", &score);
        if(score>=0){
            t++;
            sum+score;
            if(score>max){
                max=score;
                i=t;
            }
            if(score<min){
                min=score;
                l=t;
            }
        }
    }
    avg=(float)sum/t;
    printf("\nAverage score :: %.2f\n",avg);
    printf("Highest score :: %d, by studen %d\n", max, i);
    printf("Lowest score :: %d, by studen %d\n", min, l);
    return 0;
}