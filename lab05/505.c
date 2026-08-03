#include <stdio.h>
#include <stdlib.h>
int main() {
    int score=0, sum=0, sc_ma=-9999, sc_mi=9999, n_st=0, n_hi, n_lo;
    float avg;
    printf("Student score calculator\n\n");
    while(score>=0){
        printf("Enter student score %d: ",n_st+1);
        scanf("%d", &score);
        if(score>=0){
            sum+=score;
            n_st++;
            if(score>sc_ma){
                sc_ma=score;
                n_hi=n_st;
            }
            if(score<sc_mi){
                sc_mi=score;
                n_lo=n_st;
            }
        }
    }
    avg=(float)sum/n_st;
    printf("\nAverage score :: %.2f\n", avg);
    printf("Highest score :: %d (Student %d)\n", sc_ma, n_hi);
    printf("Lowest score :: %d (Student %d)\n", sc_mi, n_lo);
    return 0;  
}